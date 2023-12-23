#include <iostream>
#include <vector>
using namespace std;

void insertAtTail(Node *tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}
Node *sortList(Node *head)
{
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;

    while (curr != NULL)
    {
        int value = curr->data;
        if (value == 0)
        {
            insertAtTail(zeroTail, curr);
        }
        else if (value == 1)
        {
            insertAtTail(oneTail, curr);
        }
        else if (value == 2)
        {
            insertAtTail(twoTail, curr);
        }
        curr = curr->next;
    }

    // merge 3 sublists
    // 1s list not empty
    if (oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else
    {
        // 1s list empty
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL :
        // delete dummy nodes
        delete ZeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}