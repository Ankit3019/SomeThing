#include <iostream>
using namespace std;
class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        // Your code here
        int maxi = 0;
        int temp = 0;
        int jump = 0;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, i + arr[i]);
            if (i == temp)
            {
                temp = maxi;
                jump++;
            }
            if (temp >= n - 1)
            {
                return jump;
            }
        }
        return -1;
    }
};