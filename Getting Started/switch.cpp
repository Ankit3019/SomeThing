#include<iostream>
using namespace std;

int main(){
    // cout<<"Nameste Dunia ->"<<endl;
    char ch = '1';
    cout<<endl;
    switch (ch)
    {
    case 1:
        cout<<"First"<<endl;
        break;
    case '1':
        cout<<"character one"<<endl;
        break;
    default: cout<<"It is defalt case"<<endl;
        break;
    }
    cout<<endl;
    return 0;
}