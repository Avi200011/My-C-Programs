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
// int addmore(Node*temp)
// {
//     if(temp==NULL)
//     return 0;
//     return(temp->data+addmore(temp->left)+addmore(temp->right));
// }
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
    Node *temp; //make a tempotary varivable
    Node *last; //store the last at the node
    head->data = A[0]; //1st data
    head->next = NULL; //1st empty node
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
    // cout<<endl;
    // cout<addmore(head);
    return 0;
}