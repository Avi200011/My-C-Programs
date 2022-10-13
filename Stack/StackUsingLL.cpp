#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*top=NULL;
void push(int x)
{
    Node*t=new Node;
    if(t==NULL){
        cout<<"Stack overflow";
    }
    else 
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}
int pop()
{
    struct Node *t;
    int x=-1;
    if(top==NULL)
    {
        cout<<"The node is empty ";
    }
    else 
    {
        t=top;
        top=top->next;
        x=t->data;
        delete t;
    }
    return x;
}   
void display()
{
    Node*p;
    p=top;
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    push(11);
    push(22);
    push(33);
    push(44);
    push(55);
    display();
    cout<<"The pop element is "<<pop();
    return 0;
}