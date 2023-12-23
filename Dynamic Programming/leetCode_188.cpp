#include <iostream>
#include <vector>
using namespace std;
int solveTab(int k, vector<int> &prices)
{
    int n = prices.size();
    // vector<vector<int>> dp(n + 1, vector<int>(2, 0));
    vector<int> curr(2 * k + 1, 0);
    vector<int> next(2 * k + 1, 0);
    for (int index = n - 1; index >= 0; index--)
    {
        for (int operationNo = 0; operationNo < 2 * k; operationNo++)
        {
            int profit = 0;
            if (operationNo % 2 == 0)
            {
                int buyKaro = -prices[index] + next[operationNo + 1];
                int skipKaro = 0 + next[operationNo];
                profit = max(buyKaro, skipKaro);
            }
            else
            {
                int sellKaro = prices[index] + next[operationNo + 1];
                int skipKaro = 0 + next[operationNo];
                profit = max(sellKaro, skipKaro);
            }
            curr[operationNo] = profit;
        }
        next = curr;
    }
    return next[0];
}