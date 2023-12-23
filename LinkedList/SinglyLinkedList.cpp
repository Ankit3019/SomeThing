#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor Call for new Node
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // distructor call
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for Node " << value << endl;
    }
};

void inserAtHead(Node *&head, Node *&tail, int d)
{
    // new Node created
    if (head == NULL)
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
        tail = temp;
    }
}

void inserAtTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail->next = temp;
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        tail = temp;
        head = temp;
    }
}

void inserAtPosition(Node *&tail, Node *&head, int position, int d)
{
    Node *temp = head;
    if (position == 1)
    {
        inserAtHead(head, tail, d);
    }
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        inserAtTail(head, tail, d);
        return;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        // if(curr->next == NULL){
        //     prev = tail;
        // }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // Node* node1 = new Node(1);
    Node *head = NULL;
    Node *tail = NULL;
    inserAtHead(head, tail, 12);
    print(head);
    inserAtTail(head, tail, 14);
    print(head);
    return 0;
}