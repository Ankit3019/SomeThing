#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done"<<endl;
}

void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int arr[8] = {2, 7, 4, 9, 5, 2, 1, 9};
    selectionSort(arr, 8);
    printArray(arr,8);
}