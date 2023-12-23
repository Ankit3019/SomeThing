#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    string reverseWord(string str)
    {
        // Your code goes here
        int n = str.length();

        int l = 0, r = n - 1;
        while (l <= r)
        {
            int temp = str[l];
            str[l] = str[r];
            str[r] = temp;
            l++;
            r--;
        }
        return str;
    }
};
