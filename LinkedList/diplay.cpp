#include <bits/stdc++.h>
using namespace std;
// intial the class
class Node
{
public:
    int data;
    Node *next;
} *head = NULL;
// count the element of the linked list
int count(struct Node *p)
{
    if (p == NULL)
        return 0;
    else
        return count(p->next) + 1;
}
// add elements in linkedlist
int add(struct Node *p)
{
    int sum = 0;
    while (p)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}
// int addmore(Node*temp)
// {
//     if(temp==NULL)
//     return 0;
//     return(temp->data+addmore(temp->left)+addmore(temp->right));
// }
int Radd(struct Node *p)
{
    int sum = 0;
    if (p == NULL)
    {
        return 0;
    }
    return Radd(p->next) + p->data;
}
bool sortchack(Node *p)
{
    int x = INT16_MIN;
    while (p != NULL)
    {
        if (p->data < x)
            return false;
        x = p->data;
        p = p->next;
    }
    return true;
}
void reverse(Node *p)
{
    Node *q = NULL;
    Node *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head = q;
}
void print(Node *head)
{
    Node *p = head; // declear the p node
    while (p != NULL)
    {
        cout << p->data << "->" << flush;
        p = p->next;
    }
}
int main()
{
    int A[] = {1, 2, 7, 4, 5};
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
    print(head);
    cout << endl;
    cout << "count = ";
    cout << count(head) << endl;
    cout << "add = ";
    cout << add(head) << endl;
    cout << "recursion add = ";
    cout << Radd(head) << endl;
    if (sortchack(head))
    {
        cout << "shorted";
    }
    else
    {
        cout << "Not shorted";
    }
    cout << endl;
    reverse(head);

    // cout<<endl;
    // cout<addmore(head);
    return 0;
}