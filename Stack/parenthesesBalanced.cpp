#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool areParenthesesBalanced(string exp){
    stack<char> s;

    for(int i=0; i<exp.size(); i++){
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            s.push(exp[i]);
        }
        else{
            if(s.empty()) return false;
            else{
                char stackTop = s.top();
                if((exp[i] == ')' && stackTop == '(') ||
                (exp[i]=='}' && stackTop == '{')||
                (exp[i]==']' && stackTop == '[')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
    }
    return s.empty() ? true : false;
}
int main(){
    string exp = "{()}[]";
    if(areParenthesesBalanced(exp)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not Balnaced";
    }
    return 0;
}