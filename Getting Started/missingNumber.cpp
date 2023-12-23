#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int N)
{
    int total = (N + 1) * (N + 2) / 2;
    for (int i = 0; i < N; i++)
    {
        total -= arr[i];
    }
    return total;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << "The missing Number is : " << findMissingNumber(arr, N);
    return 0;
}