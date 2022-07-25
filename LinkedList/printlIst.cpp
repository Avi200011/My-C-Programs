#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
};
int printing(Node*n)
{
    while(n!=NULL){
    cout<<n->data<<" ";
    n=n->next;
    }
    return 0;
}
int main()
{
Node*head=NULL;
Node*second=NULL;
Node*third=NULL;

head=new Node;
second=new Node;
third=new Node;

head->data=1;
head->next=second;

second->data=2;
second->next=third;

third->data=3;
third->next=NULL;

printing(head);

return 0;
}
/*Search	O(n)	O(n)
Insert	    O(1)	O(1)
Deletion	O(1)	O(1)*/
