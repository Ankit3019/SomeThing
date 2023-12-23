#include<iostream>
#include<vector>
using namespace std;
int solveTab(int n, int a[]){
    vector<vector<int>> dp(n+1, vector<int> (n+1,0));
    for(int curr=n-1; curr>=0; curr--){
        for(int prev=curr-1; prev>=-1; prev--){
            int take = 0;
            if(prev == -1 || a[curr]>a[prev])
                take = 1+dp[curr+1][curr+1];

            int notTake = 0+dp[curr+1][prev+1];
            dp[curr][prev+1] = max(take, notTake);
        }
    }
    return dp[0][0];
}

int solveOptimal(int n, int a[]){
    if(n==0)
        return 0;
    vector<int> ans;
    ans.push_back(a[0]);

    for(int i=1; i<n; i++){
        if(a[i]>ans.back())
            ans.push_back(a[i]);
        else{
            int index = lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
            ans[index] = a[i];
        }
    }
    return ans.size();
}

int longestSubsequence(int n, int a[]){
    // return solveTab(n,a);
    return solveOptimal(n,a);
}