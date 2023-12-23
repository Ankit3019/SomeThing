// #include<iostream>
// #include<stack>
// using namespace std;

// int precedence(char c){
//     if(c == '^')
//         return 3;
//     else if(c == '*' || c == '/')
//         return 2;
//     else if(c == '+' || c == '-')
//         return 1;
//     else
//         return -1;
// }

// string infixToPostfix(string s){
//     stack < char > ch;
//     ch.push('N');
//     int l = s.size();
//     string ns;
//     for(int i=0; i<l; i++){
//         if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
//             ns += s[i];
//         }
//         else if(s[i] == '(')
//             ch.push('(');
//         else if(s[i] == ')'){
//             while(ch.top() != 'N' && ch.top() != '('){
//                 char c = ch.top();
//                 ch.pop();
//                 ns += c;
//             }
//             if(ch.top() == '('){
//                 char c = ch.top();
//                 ch.pop();
//             }
//         }
//         else{
//             while(ch.top() != 'N' && precedence(s[i] <= precedence(ch.top()))){
//                 char c = ch.top();
//                 ch.pop();
//                 ns += c;
//             }
//             ch.push(s[i]);
//         }
//     }
//     while(ch.top() != 'N'){
//         char c = ch.top();
//         ch.pop();
//         ns += c;
//     }
//     return ns;
// }
// int main(){
//     string exp = "a+b*(c^d-e)^(f+g*h)-i";
//     cout<<"Postfix : "<<infixToPostfix(exp);
//     return 0;
// }


#include <iostream>
#include <stack>
#include <string>
#include <cctype>  
using namespace std;

int getPrecedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    else
        return 0;  
}

string infixToPostfix(const string& infix) {
    stack<char> operators;
    string postfix;

    for (char symbol : infix) {
        if (isdigit(symbol) || isalpha(symbol)) {
            postfix += symbol;
        } else if (symbol == '(') {
            operators.push(symbol);
        } else if (symbol == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop();  
        } else {
            while (!operators.empty() && getPrecedence(operators.top()) >= getPrecedence(symbol)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(symbol);
        }
    }

    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}

int main() {
    string infixExpression;
    cout << "Enter the infix expression: ";
    getline(cin, infixExpression);

    string postfixExpression = infixToPostfix(infixExpression);
    cout << "Postfix expression: " << postfixExpression << endl;

    return 0;
}
