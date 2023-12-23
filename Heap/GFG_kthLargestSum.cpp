#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int getkthLargest(vector<int> &arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> mini;

    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = i; j < n; J++)
            sum += arr[j];
        if (mini.size() < k)
        {
            mini.push(sum);
        }
        else
        {
            if (sum > mini.top())
            {
                mini.pop();
                mini.push(sum);
            }
        }
    }
    return mini.top();
}