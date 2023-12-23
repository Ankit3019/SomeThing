#include<iostream>
#include<math.h>
#include<limits>
using namespace std;
int getMin(int num[], int n){
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        mini = min(mini,num[i]);

        // if(num[i]<mini){
        //     mini = num[i];
        // }
    }
    return mini;
}

int getMax(int num[], int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi,num[i]);

        // if(num[i]>maxi){
        //     maxi = num[i];
        // }
    }
    return maxi;
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

    cout<<"Maximum element of array are :"<<getMax(num,size)<<endl;
    cout<<"Minimum element of array are :"<<getMin(num,size)<<endl;

    return 0;
}