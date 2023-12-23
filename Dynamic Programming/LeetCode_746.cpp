#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    int solve(vector<int> &cost, int n)
    {
        // step1: creation of dp array
        vector<int> dp(n + 1);
        // step2: base case analysis
        dp[0] = cost[0];
        dp[1] = cost[1];

        // 3rd step
        for (int i = 2; i < n; i++)
        {
            dp[i] = cost[i] + min(dp[i - 1], dp[n - 2]);
        }
        return min(dp[n - 1], dp[n - 2]);
    }

    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        return solve(cost, n);
    }
};