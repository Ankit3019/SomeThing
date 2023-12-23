#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        // code here
        sort(arr, arr + n);
        int diff = arr[n - 1] - arr[0]; // assuming no diff is bigger than this
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - k < 0)
                continue;
            int mini = min(arr[0] + k, arr[i] - k);         // trying to make all the towers except first tower to be min
            int maxi = max(arr[i - 1] + k, arr[n - 1] - k); // trying to make all the towers except last tower to be max
            diff = min(diff, maxi - mini);
        }
        return diff;
    }
};