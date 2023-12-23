#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing Done" << endl;
}

void bubbleSort(int arr[], int n)
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

int main()
{
    int arr[8] = {9, 6, 9, 3, 0, 2, 7, 1};

    bubbleSort(arr, 8);
    printArray(arr, 8);

    return 0;
}