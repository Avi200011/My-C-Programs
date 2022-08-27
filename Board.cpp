#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *last;
} *head = NULL;
int print(Node *head)
{
    Node *p = head;
    while (p)
    {
        cout << p->data << "->" << flush;
        p = p->next;
    }
    return 0;
}
int count(Node *p)
{
    if (p == 0)
        return 0;
    else
        return count(p->next) + 1;
}
struct Node *search(Node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    return search(p->next, key); // Not found until the key reach
}
int add(Node *p)
{
    int sum = 0;
    while (p)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}
void insert(Node *p, int index, int x)
{
    Node *t;
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
        for (i = 0; i <index-1; i++)
        {
            p=p->next;
            t->next=p->next;
            p->next=t;
        }
        
    }
}
int readd(Node *p)
{
    int sum = 0;
    if (p == 0)
        return 0;
    else
        return readd(p->next) + p->data;
}
bool sortchack(Node *p)
{
    int x = INT16_MIN;
    while (p != 0)
    {
        if (p->data < x)
            return false;
        x = p->data;
        p = p->next;
    }
    return true;
}
int main()
{
    int A[] = {4, 5, 6, 17, 8, 9};
    Node *head = new Node;
    Node *temp;
    Node *last;

    head->data = A[0];
    head->last = NULL;
    last = head;

    for (int i = 1; i < sizeof(A) / sizeof(A[0]); i++)
    {
        temp = new Node;

        temp->data = A[i];
        temp->next = NULL;

        last->next = temp;
        last = temp;
    }
    print(head);
    cout << endl;
    cout << "Count = " << count(head) << endl;
    temp = search(head, 6);
    cout << "The found data is = " << temp->data << endl;
    cout << "The sum of the num = " << add(head) << endl;
    cout << "recursive sum = " << readd(head) << endl;
    (sortchack(head)) ? cout << "sorted" : cout << "Not sorted";
    void insertation=insert(head,0,7);
    cout<<insertation;
}