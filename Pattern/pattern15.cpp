#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 0;
    while(row<=n){
        //stars print
        int col = 1;
        while(col<=(n-row)){
            cout<<"*";
            col= col+1;
        }
        cout<<endl;
        row = row + 1;
    }
}