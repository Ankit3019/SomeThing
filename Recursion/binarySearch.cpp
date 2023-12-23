#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k){
    //base case
    //element Not Found
    if(s>e)
        return false;
    int mid = s + (e-s)/2;
    //element found
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid]<k){
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int key = 9;

    bool ans = binarySearch(arr,0,4,key);

    if(ans){
        cout<<"Element is Present"<<endl;
    }
    else{
        cout<<"Element is not Present"<<endl;
    }
}