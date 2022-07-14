#include <bits/stdc++.h>
using namespace std;
//intial the class
class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    int A[] = {1, 8, 2, 1, 9};
    Node *head = new Node; // make the intial node
    Node *temp;
    Node *last;
    head->data=A[0];
    head->next=NULL;
    last=head;
    // creat linkedlist
    for (int i = 1; i < sizeof(A) / sizeof(A[0]); i++)
    {
        temp = new Node;//make it stack

        temp->data=A[i];
        temp->next=NULL;

        last->next=temp;
        last=temp;

    }
    Node *p=head; //declear the p node
    while (p!=NULL)
    {
        cout<<p->data<<"->"<<flush;
        p=p->next;
    }
    return 0;
    
}