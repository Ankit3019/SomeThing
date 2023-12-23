#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int start=0;
    int end=size-1;

    int mid = start+(end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key){
    int start=0;
    int end=size-1;

    int mid = start+(end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int main(){
    // cout<<"Nameste Dunia ->"<<endl;

    int arr[6] = {2, 4, 4, 4, 4, 4};

    cout<<"First occurence of 4 at index : "<<firstOcc(arr, 6, 4)<<endl;
    cout<<"Last occurence of 4 at index : "<<lastOcc(arr, 6, 4)<<endl;

    return 0;
}