#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties
    public:
        int * arr;
        int top;
        int size;

    //behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size-top >1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){

Stack st(6);

st.push(6);
st.push(2);
st.push(4);
st.push(5);
st.push(5);
st.push(5);
st.push(5);

cout<<"Top element of stack: "<<st.peek()<<endl;

st.pop();
cout<<"Top element of stack: "<<st.peek()<<endl;
st.pop();
cout<<"Top element of stack: "<<st.peek()<<endl;
st.pop();
cout<<"Top element of stack: "<<st.peek()<<endl;
st.pop();
cout<<"Top element of stack: "<<st.peek()<<endl;

if(st.isEmpty()){
    cout<<"Stack is empty"<<endl;
}
else{
    cout<<"Stack is not empty"<<endl;
}




/*

    stack<int> s;

    // push operation
    s.push(5);
    s.push(5);
    s.push(5);
    s.push(5);

    //pop opertaion
    s.pop();

    cout<<"Top element of stact: "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of stack is: "<<s.size()<<endl;
    */
}
