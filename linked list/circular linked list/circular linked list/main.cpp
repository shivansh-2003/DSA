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
    ~node()
    {
        int value=this->data;
        if(this->next==NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory free"<<value<<endl;
    }
};
void insertNode(node* &tail,int element,int d)
{
   
    if(tail==NULL)
    {
        node* insert=new node(d);
        tail=insert;
        insert->next=insert;
        
    }
    else
    {
        //assuming tjat the element is present in the list
        node* curr=tail;
        while(curr->data!=element)
        {
            curr=curr->next;
        }
        node* temp=new node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void deleteNode(node* &tail,int value)
{
    if(tail==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    else
    {
        node* prev=tail;
        node* curr=prev->next;
        
        while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(tail==curr)
        {
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
void print(node* tail)
{
    node* temp=tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail !=temp);
    cout<<endl;
}
int main()
{
    node* tail=NULL;
    
    insertNode(tail, 5, 3);
    print(tail);
    
    insertNode(tail, 3, 5);
    print(tail);
    
    insertNode(tail, 5, 7);
    print(tail);
    
    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 3, 38);
    print(tail);
    
    deleteNode(tail, 5);
    print (tail);
}
