#include <iostream>
#include <limits.h>
using namespace std;
class Solution
{
public:
    int getMin(int num[], int n)
    {
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            mini = min(mini, num[i]);

            // if(num[i]<mini){
            //     mini = num[i];
            // }
        }
        return mini;
    }

    int getMax(int num[], int n)
    {
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, num[i]);

            // if(num[i]>maxi){
            //     maxi = num[i];
            // }
        }
        return maxi;
    }

    int findSum(int A[], int N)
    {
        // code here.

        int min = getMin(A, N);
        int max = getMax(A, N);

        int sum = max + min;
        return sum;
    }
};