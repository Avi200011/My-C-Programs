#include <bits/stdc++.h>
using namespace std;
class Node // declear the 2 parameters in class
{
public:
    int data;
    Node *next;
};
// direct mathod
int max(Node *p)
{
    int m = INT_MIN;
    while (p)
    {
        if (p->data > m)
            m = p->data;
        else
            p = p->next;
    }
    return (m);
}
// recursive methord
int Rmax(Node *p)
{
    int x = 0;
    if (p == 0)
    {
        return INT_MIN;
    }
    else
    
        x = Rmax(p->next);
        if (x>p->data)
        {
            return x;
        }
        return p->data;
        
    
}
int main()
{
    int B[] = {1, 8, 7, 6, 50, 4, 3, 2, 1};
    Node *head = new Node;
    Node *temp;
    Node *last;
    head->data = B[0];
    head->next = NULL;
    last = head;
    for (int i = 0; i < sizeof(B) / sizeof(B[0]); i++)
    {
        temp = new Node;
        temp->data = B[i];
        temp->next = NULL;

        last->next = temp;
        last = temp;
    }
    cout << max(head) << endl;
    cout << Rmax(head);
    return 0;
}