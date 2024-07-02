#include <iostream>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr)
    {}
};

class LinkedList {
private:
    ListNode* head;
public:
    LinkedList() : head(nullptr)
    {}
    void addNode(int val) {
        ListNode* newNode = new ListNode(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            ListNode* cur = head;
            while (cur->next != nullptr) {
                cur = cur->next;
            }
            cur->next = newNode;
        }
    }

    ListNode* findMiddle()
    {
        if (head == nullptr || head->next == nullptr)
        {
            // If there are 0 or 1 nodes, the middle is the only node
            return head;
        }

        ListNode* slowPtr = head;
        ListNode* fastPtr = head;

        while (fastPtr != nullptr && fastPtr->next != nullptr) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }

        return slowPtr;
    }
};

int main()
{
    LinkedList myList;
    myList.addNode(1);
    myList.addNode(2);
    myList.addNode(3);
    myList.addNode(4);
    myList.addNode(5);

    ListNode* middleNode = myList.findMiddle();
    if (middleNode != nullptr)
    {
      cout << "The middle node has value " << middleNode->val << endl;
    }
    else
    {
        cout << "The linked list is empty." << endl;
    }
 
}
/*#include<iostream>
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
int getlenght(node* head)
{
    int len=0;
    while(head!=NULL)
    {
        len++;
        head=head->next;
    }
    return len;
}
node *findMiddle(node *head)
{
    int len=getlenght(head);
    int ans=(len/2);
    
    node* temp=head;
    int cnt=0;
    while(cnt<ans)
    {
        temp=temp->next;
        cnt++;
    }
    return temp;
}
void insertElement(node *&head,int data)
{
    node *insert=new node(data);
    if(head==NULL)
    {
        head=insert;
    }
    node *current=head;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=insert;
}

void printList(node* head)
{
    while (head != NULL) {
        cout << " " << head->data;
        head = head->next;
    }
}

int main()
{
    node *head = NULL;

    // Insert elements into the linked list
    insertElement(head, 10);
    insertElement(head, 20);
    insertElement(head, 30);
    insertElement(head, 40);
    insertElement(head, 50);

    // Print the original linked list
    cout << "Original Linked List: ";
    printList(head);

    // Find the middle node
    node *middleNode = findMiddle(head);
    cout << "Middle Node: " << middleNode->data << endl;

    return 0;
}*/

