#include <bits/stdc++.h>
using namespace std;
struct Node
{
public:
    int data;
    Node *next;
} *head = NULL;
int count(Node *c)
{
    if (c == 0)
        return 0;
    return count(c->next) + 1;
}
void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data<<" ";
        p = p->next;
    }
}
void insert(Node *p, int index, int x)
{
    struct Node *t;
    int i;
    if (index < 0 || index > count(p))
        return;
    t = new Node;
    t->data = x;
    if (index == 0)
    {
        t->next = head;
        head = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
            t->next = p->next;
            p->next = t;
        }
    }
}
int main()
{
    int B[] = {1, 8, 7, 6, 50, 4, 3, 2, 1};
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
    insert(head, 0, 88);
    Display(head);
}