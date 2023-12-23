#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done"<<endl;
}

void printArraych(char arr[], int size){
    cout<<"Printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done"<<endl;
}
int main(){
    // cout<<"Nameste Dunia ->"<<endl;
    int first[10] = {0};
    printArray(first,10);

    char second[10] = {'a','b','c','d','e','f','g','h','i','j'};
    printArraych(second, 10);


}