#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void preorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout <<root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void preorder2(Node *root)
{
    stack st;
    while(root!=NULL || is_empty(st))
    {
        if(root!=NULL)
        {
            cout<<root->data;
            push(&st,root);
            root=root->left; 
        }
        else 
        {
            root=pop(&st);
            root=root->right;
        }
    }
}
void postorder(struct Node* root)
{
    if (root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
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
Node* searchinBTS(Node* root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data = key)
    {
        return root;
    }
    if (root->data>key){
        return searchinBTS(root->left,key);
    }
    return searchinBTS(root->right,key);
}
/*        1
        /   \
        2    3
        / \  / \
        4  5 6  7
*/
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<"Preorder : ";
    preorder(root);
    cout<<endl;
    cout<<"postorder : ";
    postorder(root);
    cout<<endl;
    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;
    if(searchinBTS(root,88)==NULL){
        cout<<"key not exist";
    }
    else{
        cout<<"key exist";
    }
    preorder2(root);
    
    return 0;
}