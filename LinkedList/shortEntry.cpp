#include <bits/stdc++.h>
using namespace std;
struct Node
{
public:
    int data;
    Node *next;
} *head = NULL;
int insert(Node *p, int x)
{
    Node *t, *q = NULL;

    t = new Node;
    t->data = x;
    t->next = NULL;
    if (head == NULL)
    {
        head = t;
    }
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p=p->next;
        }
        if (p == head)
        {
            t->next = head;
            head = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
    return 0;
}
int main()
{
    int B[] = {1,2,4,5,6};
    Node *head = new Node;
    Node *temp;
    Node *last;
    head->data = B[0];
    head->next = NULL;
    last = head;
    for (int i = 0; i < sizeof(B) / sizeof(B[0]); i++)
    {
        temp = new Node;
        temp->data = B[i];
        temp->next = NULL;

        last->next = temp;
        last = temp;
    }
    cout<<insert(head,3);
    return 0;
}