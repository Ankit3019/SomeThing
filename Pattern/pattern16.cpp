#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    /*int value = row;
    for pattern 
    1234
     567
      89
       10
    */
    while(row<=n){
        //space print
        int space = row - 1;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        //stars print
        int col = 1;
        while(col<=(n-row+1)){
            cout<<"*";
            // int value = row; // for pattern number (or 16)
            // cout<<value;
            // value = value+1;
            col= col+1;
        }
        cout<<endl;
        row = row + 1;
    }
}