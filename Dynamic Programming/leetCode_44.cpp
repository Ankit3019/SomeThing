#include <iostream>
#include <vector>
using namespace std;
bool solveTab(string str, string pattren)
{
    vector<vector<int>> dp(str.length() + 1, vector<int>(pattren.length() + 1, 0));
    vector<int> prev(pattren.length()+1,0);
    vector<int> curr(pattren.length()+1,0);

    prev[0] = true;
    for (int j = 1; j <= pattren.length(); j++)
    {
        bool flag = true;
        for (int k = 1; k <= j; k++)
        {
            if (pattren[k - 1] != '*')
            {
                flag = false;
                break;
            }
        }
        prev[j] = flag;
    }
    for (int i = 1; i <= str.length(); i++)
    {
        for (int j = 1; j <= pattren.length(); j++)
        {
            if (str[i - 1] == pattren[j - 1] || pattren[j - 1] == '?')
                curr[j] = prev[j - 1];
            else if (pattren[j - 1] == '*')
                curr[j] = (prev[j] || curr[j - 1]);
            else curr[j] = false;
        }
        prev = curr;
    }
    return prev[pattren.length()];
}