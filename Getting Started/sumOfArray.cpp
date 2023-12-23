#include<iostream>
#include<math.h>
#include<limits>
using namespace std;

void sum(int num[], int size){
    int sumation =  0;
    for(int i=0;i<size;i++){
        sumation = num[i] + sumation;  
    }
    cout<<"Sum of array are: "<<sumation<<endl;
}
int main(){
    // cout<<"Nameste Dunia ->"<<endl;

    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[100];

    for(int i = 0; i<size;i++){
        cin>>num[i];
    }

    sum(num, size);

    return 0;
}