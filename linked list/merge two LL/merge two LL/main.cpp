#include <iostream>
using namespace std;
template <typename T>
    class node {
        public:
        T data;
        node* next;

        node(T data) {
            next = NULL;
            this->data = data;
        }

        ~node() {
            if (next != NULL) {
                delete next;
            }
        }
    };
template <typename T>
void insertNode(node<T>*& head, T data) {
    node<T>* newNode = new node<T>(data);

    if (head == NULL) {
        head = newNode;
    } else {
        node<T>* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


node<int>* solve(node<int>* first, node<int>* second)
{
    //if only one node present
    if(first->next==NULL)
    {
        first->next=second;
        return first;
    }
    node<int>*curr1=first;
    node<int>* next1=curr1->next;
    node<int>*curr2=second;
    node<int>* next2=curr2->next;
    
    while(next1!=NULL&&curr2!=NULL)
    {
        if((curr2->data>=curr1->data)&&(curr2->data<=next1->data))
        {
            //add node b/w
            curr1->next=curr2;
            next2=curr2->next;
            curr2->next=next1;
            //update pointer
            curr1=curr2;
            curr2=next2;
        }
        else
        {
            curr1=next1;
            next1=next1->next;
            
            if(next1==NULL)
            {
                curr1->next=curr2;
                return first;
            }
        }
    }
    return first;
}
node<int>* sortTwoLists(node<int>* first, node<int>* second)
{
    if(first==NULL)
        return second;
    else if(second==NULL)
    {
        return first;
    }
    if(first->data<=second->data)
    {
        return solve(first, second);
    }
    else{
        return solve(second, first);
    }
}
void printList(node<int>* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    node<int>* head1 = NULL;

    insertNode(head1, 1);
    insertNode(head1, 2);
    insertNode(head1, 5);

    node<int>* head2 = NULL;
    
    insertNode(head2, 3);
    insertNode(head2, 4);
    insertNode(head2, 6);

    cout << "List1"<<" ";
        printList(head1);
    cout<<endl;
    cout << "List2"<<" ";
        printList(head2);
    
    cout<<endl;
    sortTwoLists(head1, head2);
    
    cout<<"sorted LL";
    printList(head1);

}
