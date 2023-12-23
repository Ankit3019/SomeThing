#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k){
    //base case
    if(size == 0 )
        return false;
    if(arr[0] == k){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr+1,size-1,k);
        return remainingPart;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int key = 2;

    bool ans = linearSearch(arr,5,key);

    if(ans){
        cout<<"Element is Present"<<endl;
    }
    else{
        cout<<"Element is not Present"<<endl;
    }
}