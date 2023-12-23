#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    /*int value = row;
    for pattern 
       1
      23
     456
    78910
    */
    while(row<=n){
        //space print
        int space = n - row;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        //stars print
        int col = 1;
        while(col<=row){
            cout<<"*";
            // int value = row; // for pattern number (or 14)
            // cout<<value;
            // value = value+1;
            col= col+1;
        }
        cout<<endl;
        row = row + 1;
    }
}