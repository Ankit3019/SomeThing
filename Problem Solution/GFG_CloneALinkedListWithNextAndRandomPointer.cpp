#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    void insertAtTail(Node *&head, Node *&tail, int d)
    {
        Node *newNode = newNode(d);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

public:
    Node *copyList(Node *head)
    {
        // step1: create a clone list
        Node *cloneHead = NULL;
        Node *cloneTail = NULL;

        Node *temp = head;
        while (temp != NULL)
        {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        // step2: cloneNodes add in between original list
        Node *originalNode = head;
        Node *cloneNode = cloneHead;

        while (originalNode != NULL && cloneNode != NULL)
        {
            Node *next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;
        }
        // step3: random pointer copy
        temp = head;
        while (temp != NULL)
        {
            if (temp->next != NULL)
            {
                temp->next->arb = temp->arb ? temp->arb->next : temp->arb;
            }
            temp = temp->next->next;
        }
        // step4: revert changes done in step 2
        originalNode = head;
        cloneNode = cloneHead;
        while (originalNode != NULL && cloneNode != NULL)
        {
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;
            if (originalNode != NULL)
            {
                cloneNode->next = originalNode->next;
            }
            cloneNode = cloneNode->next;
        }
        // step5: return ans;
        return cloneHead;
    }
};