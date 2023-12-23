#include<iostream>
using namespace std;

int main(){
    // cout<<"Nameste Dunia ->"<<endl;
    int a;
    cin>>a;
   /* if(a>0){
        cout<<"a is positive"<<endl;
    }
    else{
        cout<<"a is negitive"<<endl;
    }
    */
   int i = 1;
   int sum = 0;
   while(i<=a){
    sum = sum + i;
    i = i + 1;
   }
   cout<<"Value of sum is : "<<sum;

}
