#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* newNode(int data){
    Node* node = new Node();

    if(! node){
        cout<<"Heap overflow";
        exit(1);
    }
    node->data = data;
    node->next = NULL;
    return node;
}
int isEmpty(Node* front){
    return (front == NULL);
}

void push(Node** front, Node** rear, int data){
    Node *node = newNode(data);
    if(*rear == NULL){
        *front = *rear = node;
        return;
    }
    (*rear)->next = node;
    *rear = node;
}
void pop(Node** front, Node** rear){
    if(isEmpty(*front)){
        return;
    }
    Node* temp = *front;
    *front = (*front) -> next;
    if(*front == NULL)
        *rear = NULL;
    delete(temp);
}

int main(){
    Node* front=NULL, *rear = NULL;
    push(&front, &rear, 10);
    push(&front, &rear, 20);
    pop(&front, &rear);
    if(front != NULL){
        cout<<"Front element is : "<<front->data;
    }
    return 0;
}