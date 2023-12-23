#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> duplicates(long long arr[], int n)
    {
        vector<int> v;
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[i + 1] && arr[i] == arr[i - 1])
            {
                v.push_back(arr[i]);
            }
        }
        if (v.empty())
        {
            v.push_back(-1);
        }
        return v;
    }
};