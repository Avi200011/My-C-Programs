#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left,*right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
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
    if (root->data<key){
        return searchinBTS(root->right,key);
    }
    return searchinBTS(root->left,key);
}
int main()
/*              4
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
    int key=58;

    if(searchinBTS(root,key)==NULL){
        cout<<"key not exist";
    }
    else{
        cout<<"key exist";
    }
    return 0;
}