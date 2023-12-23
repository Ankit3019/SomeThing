#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swaped = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaped = true;
            }
        }
        if (swaped == false)
            break;
    }
}
