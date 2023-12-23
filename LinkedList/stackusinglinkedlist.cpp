#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* newNode(int data){
    Node* node = new Node();
    if(!node){
        cout<<"Heap overflow\n";
        exit(1);
    }
    node->data = data;
    node->next = NULL;
    return node;
}
int isEmpty(Node* top){
    return (top == NULL);
}
void push(Node** top, int data){
    Node* node = newNode(data);
    node->next = *top;
    *top = node;
    cout<<data<<" pushed to satck \n";
}
int peek(Node* top){
    if(!isEmpty(top))
        return top->data;
    else
        exit(EXIT_FAILURE);
}

int pop(Node** top){
    Node* temp = *top;
    *top = (*top)->next;
    int popped = temp->data;
    delete temp;
    return popped;
}

int  main(){
    Node* top = NULL;
    push(&top, 10);
    push(&top, 30);
    push(&top, 20);
    cout<<"Top element is : "<<peek(top)<<endl;
    cout<<pop(&top) <<" popped from stack \n";
    cout<<"Top element is : "<<peek(top) <<endl;
    return 0;
}
