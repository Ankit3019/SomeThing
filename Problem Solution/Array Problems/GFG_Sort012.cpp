#include <iostream>
using namespace std;
class Solution
{
public:
    void sort012(int a[], int n)
    {
        // code here
        int low = 0;      // Pointer to the beginning of the sorted array of 0s
        int high = n - 1; // Pointer to the end of the sorted array of 2s
        int i = 0;

        while (i <= high)
        {
            if (a[i] == 0)
            {
                swap(a[i], a[low]);
                i++;
                low++;
            }
            else if (a[i] == 2)
            {
                swap(a[i], a[high]);
                high--;
            }
            else
            {
                i++;
            }
        }
    }
};