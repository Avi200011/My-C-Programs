 #include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void push(Node **head_ref, int data)
{
    Node *ptr1 = new Node();
    Node *temp = *head_ref;
    ptr1->data = data;
    ptr1->next = *head_ref;

    /* If linked list is not NULL then
    set the next of last node */
    if (*head_ref != NULL)
    {
        while (temp->next != *head_ref)
            temp = temp->next;
        temp->next = ptr1;
    }
    else
        ptr1->next = ptr1; /*For the first node */

    *head_ref = ptr1;
}
void printlist(Node *head)
{
    Node *temp = head;
    if (head != NULL)
    {
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }
}
int main()
{
    Node *head = NULL;

    push(&head, 12);
    push(&head, 45);
    push(&head, 11);
    push(&head, 10);
    push(&head, 99);

    printlist(head);
    return 0;
}