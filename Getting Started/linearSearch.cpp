#include<iostream>
#include<math.h>
#include<limits>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    // cout<<"Nameste Dunia ->"<<endl;
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;

    bool found = search(arr, 10 ,key);
    if(found){
        cout<<"Key is Present"<<endl;
    }
    else{
        cout<<"Key is Not Present"<<endl;
    }

    return 0;
}