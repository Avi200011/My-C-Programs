#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
} *head = NULL;
int RemoveDuplicate(Node *p)
{
    Node *q = p->next;

    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }

        else
        {
            p->next = q->next;
            delete (q);
            q = p->next;
        }
    }
    return 0;
}
int main()
{
    int A[] = {1, 2, 3, 3, 3, 4, 5, 6};
    Node *head = new Node; // make the intial node
    Node *temp;            // make a tempotary varivable
    Node *last;            // store the last at the node
    head->data = A[0];     // 1st data
    head->next = NULL;     // 1st empty node
    last = head;
    // creat linkedlist
    for (int i = 1; i < sizeof(A) / sizeof(A[0]); i++)
    {
        temp = new Node; // make it stack

        temp->data = A[i];
        temp->next = NULL;

        last->next = temp;
        last = temp;
    }
    Node *p = head; // declear the p node
    while (p != NULL)
    {
        cout << p->data << "->" << flush;
        p = p->next;
    }
    cout<<endl;
    cout << RemoveDuplicate(head);
    return 0;
}
