#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        //constructor
        Node(int d){
            this->data = d;
            this->prev = NULL;
            this->next = NULL;
        }
        //distructor call
        ~Node(){
            int value = this->data;
            if(this->next != NULL){
                delete next;
                next = NULL;
            }
            cout<<"Memory is free for Node "<<value<<endl;
        }
};

int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head,Node* &tail, int d){
    if(head == NULL){
        Node*temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head, Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void inserAtPosition(Node* &head, Node* &tail,int position, int d){
    Node* temp = head;
    if(position == 1){
        insertAtHead(head,tail,d);
    }
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* &head, Node* & tail){
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail, 11);
    insertAtTail(head,tail,45);
    inserAtPosition(head,tail,2,12);
    print(head);
    deleteNode(1,head,tail);
    print(head);
    cout<<"Length - "<<getLength(head)<<endl;
}