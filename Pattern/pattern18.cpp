#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while(row<=n){
        //space print (1st triangle)
        int number = n - row+1;
        int num = 1;
        while(number){
            cout<<num;
            num = num + 1;
            number = number - 1;
        }
        // print 2nd triangle
        int col = 1;
        while(col<=row-1){
            cout<<"*";
            col= col+1;
        }
        //print 3rd triangle
        //space print
        int space = row - 1;
        while(space){
            cout<<"*";
            space = space - 1;
        }
        //stars print
        // int col = 1;
        int val = n;
        while(col<=(n+1-row)){
            cout<<n+2-col-row;
            // val = val + 1;
            col= col+1;
        }
        cout<<endl;
        row = row + 1;
    }
}