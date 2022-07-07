#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node*left;
    struct Node*right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
void preorder(struct Node *root)
{
    if (root==NULL)
    {
        return;
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct Node*root)
{
    if (root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
    else
    return;
    
}
void inorder(struct Node*root)
{
    if (root==NULL)
    {
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
/*            18
           /      \  
         15         30  
        /  \        /  \
     40    50    100   40 */
{
    struct Node *root=new Node(18);
    root->left=new Node(15);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right->left= new Node(100);
    root->right->right= new Node(40);
    cout<<"preorder : ";
    preorder(root);
    cout<<"postorder : ";
    postorder(root);
    cout<<"inorder : ";
    inorder(root);
    return 0;
    
}