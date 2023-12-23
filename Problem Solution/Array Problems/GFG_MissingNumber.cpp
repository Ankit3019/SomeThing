#include<iostream>
#include<vector>
using namespace std;
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int ans=0;
        int sum=(n*(n+1))/2; // just like ap series for finding missing value
        for(int i=0;i<n-1;i++){
            ans+=array[i];
        }
        int missing=sum-ans;
        return missing;
    }
};