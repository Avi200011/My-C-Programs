#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left,*right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node* deleteinbst(Node *root,int key)
{
    if(key<root->data)
    {
        root->left=deleteinbst(root->left,key);
    }
    else if(key<root->data)
    {
        root->right=deleteinbst(root->left,key);
    }
    else 
    {
        if(root->left==NULL)
        {
            Node* temp=root->right;
            free(root);
            return temp; 
        }
        else if(root->right==NULL)
        {
        Node* temp=root->left;
        free(root);  
        return temp;
        }
        
    }
}
int main()
{
    /*          4
            /       \
            2         5
        /  \           \
        1    3          6 */
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);
}