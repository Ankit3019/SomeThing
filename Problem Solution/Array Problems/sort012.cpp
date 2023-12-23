#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOneTwo(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0  && left < right)
        {
            left++;
        }
        while (arr[right] == 2 && left < right)
        {
            right--;
        }
        if(arr[left] == 2 & arr[right] == 1 && left < right){
            swap(arr[left], arr[right]);
            right--;
        }
        if(arr[left] == 2 & arr[right] == 0 && left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        if(arr[left] == 1 & arr[right] == 0 && left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
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
    void Sort012(int a[], int n){
        sort(a,a+n);
    }
int main()
{
    int arr[10] = {1, 1, 2, 0, 1, 2, 0, 2, 0, 2};

    // sortOneTwo(arr, 10);
    // sort012(arr,10);
    Sort012(arr,10);
    printArray(arr, 10);

    return 0;
}