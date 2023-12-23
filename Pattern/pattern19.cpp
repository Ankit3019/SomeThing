// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
// print pattren using c++ language

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << j;
        }
        for (int j = 0; j <= i - 1; j++)
        {
            cout << "*";
        }
        for (int start = 0; start < i; start++)
        {
            cout << "*";
        }
        for (int j = 2; j <= (n + 1 - i); j++)
        {
            cout << (n + 2 - j - i);
        }
        cout << endl;
    }
    return 0;
}