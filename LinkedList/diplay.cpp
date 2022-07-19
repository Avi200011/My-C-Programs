#include <bits/stdc++.h>
using namespace std;
// intial the class
class Node
{
public:
    int data;
    Node *next;
};
//count the element of the linked list
int count(struct Node *p)
{
    if(p==NULL)
    return 0;
    else
    return count(p->next)+1;
}
//add elements in linkedlist
int add(struct Node*p)
{
    int sum=0;
    while (p)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
    
}
int Radd(struct Node*p)
{
    int sum=0;
    if(p==NULL)
    {
        return 0;
    }
    return Radd(p->next)+p->data;
}
int main()
{
    int A[] = {1, 8, 2, 1, 9,7,2};
    Node *head = new Node; // make the intial node
    Node *temp;
    Node *last;
    head->data = A[0];
    head->next = NULL;
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
        cout<< p->data << "->" << flush;
        p = p->next;
    }
    cout<<endl<<"count = ";
    cout<<count(head);
    cout<<endl<<"add = ";
    cout<<add(head);
    cout<<endl<<"recursion add = ";
    cout<<Radd(head);
    return 0;
}