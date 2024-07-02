#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node* prev;
    node* next;
    //constructor
    node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    ~node()
    {
        int val=this->data;
        if(next==NULL)
        {
            delete next;
            next=NULL;
        }
    }
};
   void print(node* head)
   {
       node* temp=head;
       while(temp!=NULL)
       {
           cout<<temp->data;
           temp=temp->next;
       }
       cout<<endl;
   }
   void deletenode(int position,node* &head)
   {
       //delete the start node
      if(position==1)
      {
          node* temp=head;
          temp->next->prev=NULL;
          head=temp->next;
          temp->next=NULL;
          delete temp;
      }
       
       else
       {
           node* curr=head;
           node* prev=NULL;
           int cnt =1;
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
//give lenght of linked list;
int getlenght(node* head)
 {
    int len=0;
    node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
 }

void insertAthead(node* &head,int d)
{
    //empty  list
    if(head==NULL)
    {
        node* temp=new node(d);
        head=temp;
    }
    else{
        node* temp =new node(d);
        temp->next=head;
        head->prev=temp;
        head =temp;
    }
}
void insertAttail(node* tail,int d)
{
    if(tail==NULL)
    {
        node* temp=new node(d);
        tail=temp;
    }
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtAnyposition(node* &head,node* &tail,int position,int d)
{
    //insert at start
    if(position==1)
    {
        insertAthead(head, d);
        return;
    }
    node* temp=head;
    int cnt=1;
    
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //insert at last position
    if(temp->next==NULL)
    {
        insertAttail(tail, d);
        return;
    }
    //creating node for d
    node* nodeToinsert=new node(d);
    
    nodeToinsert->next=temp->next;
    temp->next->prev=nodeToinsert;
    temp->next=nodeToinsert;
    nodeToinsert->prev=temp;
}
int main()
{
    node* node1=new node(19);
    node* head=node1;
    node* tail=node1;
    print(head);
   // cout<<getlenght(head)<<endl;
    insertAthead(head,11);
    print(head);
    
    insertAthead(head,13);
    print(head);
    
    insertAthead(head,8);
    print(head);
    
    insertAttail(tail,7);
    print(head);
    
    insertAtAnyposition(head, tail, 3, 4);
    print(head);
}
