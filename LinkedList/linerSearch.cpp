#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
} *head = NULL;
Node *imsearching(Node *w, int key)
{
    Node *q = NULL;
    while (w != NULL)
    {
        if (key == w->data)
        {
            q->next = w->data;
            w->next = head;
            head = w;
        }
        q = w;
        w = w->data;
        return 0;
    }
    return 0;
}
Node *finding(Node *p, int key) // liner searching
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return (p);
        }

        p = p->next;
    }
    return NULL;
}
int counting(Node *c)
{
    if (c == 0)
        return 0;
    return counting(c->next) + 1;
}
int main()
{
    int s[] = {66, 44, 33, 22, 11, 99};
    Node *head = new Node;
    Node *temp;
    Node *last;
    head->data = s[0];
    head->next = NULL;
    last = head;
    for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++)
    {
        temp = new Node;
        temp->data = s[i];
        temp->next = NULL;

        last->next = temp;
        last = temp;
    }

    finding(head, 11) ? cout << "yes" : cout << "no";
    cout << endl;
    cout << counting(head);
    cout << endl;
    if (imsearching(head, 22))
    {
        cout << "yes";
    }
    cout << "no";
    return 0;
}