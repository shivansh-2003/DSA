#include <iostream>
using namespace std;
class node
{
  public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
   
};
node* revereselinkedlist(node *head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    node* prev=NULL;
    node* curr=head;
    node* forward=NULL;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        
    }
    return prev;
}
void insertNode(node *&head, int data)
{
    node *newNode = new node(data);
    
    if (head == NULL)
    {
        // If the linked list is empty, make the new node the head
        head = newNode;
    }
    else
    {
        // Traverse to the end of the linked list
        node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        
        // Append the new node at the end
        current->next = newNode;
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

    head = revereselinkedlist(head);

        // Print the reversed linked list
    printLinkedList(head);
    
}
    







