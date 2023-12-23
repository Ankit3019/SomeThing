#include <iostream>
#include <vector>

using namespace std;

Node* reverse1(Node* head){
    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* chotaHead = reverse1(head->next);
    head=>next->next=head;
    head->next=NULL;
    return chotaHead;
}
void reverse(Node *&head, Node *curr, Node *prev)
{
    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    Node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

Node *reverseLinkedList(Node *head)
{
    return reverse1(head);
    /*
    Node *curr = head;
    Node *prev = NULL;
    reverse(head, curr, prev);
    return head;
    */

    /*
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node * prev = NULL:
    Node * curr = head:
    Node * forward = NULL:
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
    */
}