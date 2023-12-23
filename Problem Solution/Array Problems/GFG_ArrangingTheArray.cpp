#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void Rearrange(int arr[], int n)
    {
        // Your code goes here
        // sort(arr, arr+n);
        vector<int> NonNeg;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
                arr[cnt++] = arr[i];
            else
                NonNeg.push_back(arr[i]);
        }

        for (int i = 0; i < NonNeg.size(); i++)
            arr[cnt++] = NonNeg[i];
    }
};