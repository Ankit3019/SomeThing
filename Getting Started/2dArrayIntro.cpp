#include <iostream>
using namespace std;

bool isPresent(int arr[3][3], int target, int n, int m)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
                return 1;
        }
    }
    return 0;
}

void printSum(int arr[3][3], int row, int col)
{
    cout << "Printing Sum" << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}
void printColSum(int arr[3][3], int row, int col)
{
    cout << "Printing Sum" << endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[3][3], int row, int col)
{
    int maxi = (-2147483647 - 1);
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is: " << maxi << endl;
    return rowIndex;
}
int main()
{
    int arr[3][3];
    cout << "Enter array elements" << endl;
    // taking input rowWise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    /* //taking input colWise
     for(int col=0; col<3; col++){
         for(int row =0; row<3; row++){
             cin>>arr[row][col];
         }
     }
     */
    cout << "Printing Array elements" << endl;
    // printing array
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

  /*  cout << "Enter the element to search: " << endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 3))
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }
    */

    printSum(arr, 3, 3);
    printColSum(arr, 3, 3);

    int roWIndex = largestRowSum(arr,3,3);

    cout<<"Maximum row is at index: : "<<roWIndex<<endl;

    return 0;
}