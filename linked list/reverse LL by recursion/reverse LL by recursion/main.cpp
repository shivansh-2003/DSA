#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
/*void reverse(node* &head,node* curr,node* prev)
{
    if(curr==NULL)
    {
        head=prev;
        return;
    }
    node* forward=curr->next;
    curr->next=prev;
    reverse(head,forward,curr);
  
}*/
node *reverse1(node* head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    node* chotahead=reverse1(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return chotahead;
}
node* reverselinkedlist(node *head)
{
    return reverse1(head);
    /*node* curr=head;
    node* prev=NULL;
    reverse(head,curr,prev);
    return head;*/
}
void insertNode(node *&head,int data)
{
    node* insert=new node(data);
    if(head==NULL)
    {
        head=insert;
    }
    else
    {
        node *current=head;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=insert;
    }
}
void printLinkedList(node *head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty." << endl;
        return;
    }
    node *current = head;
    cout << "Linked List: ";
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL; // Initialize the head of the linked list as NULL

       // Insert nodes into the linked list
    insertNode(head, 4);
    insertNode(head, 12);
    insertNode(head, 44);
    insertNode(head, 24);
    insertNode(head, 55);
       // Print the original linked list
    printLinkedList(head);

    head = reverselinkedlist(head);

        // Print the reversed linked list
    printLinkedList(head);
}
