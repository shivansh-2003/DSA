#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;
    node(int data)//Constructor
    {
        this-> data=data;
        this-> next=NULL;
    }
    
    ~node()//Destructor
    {
        int value=this->data;
        if(this->next !=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<value<<endl;
    }
    
};
void InsertAtHead(node* &head,int d)
{
    //new node created
    node* temp=new node(d);
    temp-> next=head;
    head=temp;
}
void InsertAttail(node* &tail,int d)
{
    //new node created
    node* temp=new node(d);
    tail->next=temp;
    tail=tail->next;
}
void InsertAtposition(node* &tail,node* &head,int position,int d)
{
    if(position==1)
    {
        InsertAtHead(head,  d);
        return;
    }
    node* temp=head ;
    int cnt=1;
    
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        InsertAttail(tail,d);
        return;
    }
    node* nodetoinsert=new node(d);
    nodetoinsert -> next=temp ->next;
    temp->next=nodetoinsert;
}
bool search(node* head,int x)
{
    node *curr=head;
    while(curr!=NULL)
    {
        if(curr->data==x)
            return true;
    }
    return false;
}
void deletenode(int position,node* &head)
{
    if(position==1)
    {
        node* temp=head;
        head=head->next;
        //memory free start node
        temp->next=NULL;
        delete temp;  
    }
    else//delteing any middle or last code
    {
        node* curr=head;
        node* prev=NULL;
        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    //created a new node
    
    node* node1=new node(10);
   // cout<<node1->data<<endl;
  //  cout<<node1->next<<endl;
    
    //head pointed to node1
    
    node* head=node1;
    node* tail=node1;
    print(head);
    
    InsertAttail(tail, 12);
    print(head);
    
    InsertAttail(tail ,15);
    print(head);
    
    InsertAtposition(tail, head, 3, 33);
    print(head);
    
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    
    deletenode(1,head);
    print(head);
    
    int x=12;
    search(head,x)?cout<<"yes":cout<<"no";
    
}
