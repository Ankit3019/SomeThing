// #include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
bool isPalRec(char str[], int s, int e)
{
    if (s == e)
        return true;
    if (str[s] != str[e])
        return false;
    if (s < e + 1)
        return isPalRec(str, s + 1, e - 1);
    return true;
}

bool isPliandrome(char str[])
{
    int n = strlen(str);
    if (n == 0)
        return true;
    return isPalRec(str, 0, n - 1);
}
int main()
{
    char str[] = "geeg";
    if (isPliandrome(str))
        cout << "Yes";
    else
        cout << "NO";
    return 0;
}