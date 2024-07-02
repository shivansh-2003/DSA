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
void insertNode(node* head,int data)
{
    node* newnode=new node(data);
    if(head==NULL)
    {
        head=newnode;
    }
    node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
        temp->next=newnode;
}
node* reverse(node* ptr)
{
      node* pre=NULL;
      node* nex=NULL;
      while(ptr!=NULL) {
          nex = ptr->next;
          ptr->next = pre;
          pre=ptr;
          ptr=nex;
      }
      return pre;
}
/*bool isPalindrome(node* head)
{
    vector<int> arr;
        while(head != NULL) {
            arr.push_back(head->data);
            head = head->next;
        }
        for(int i=0;i<arr.size()/2;i++)
            if(arr[i]!= arr[arr.size()-i-1])
                return false;
        return true;
}*/
bool isPalindrome(node* head) {
    if(head==NULL||head->next==NULL) return true;
        
    node* slow = head;
    node* fast = head;
        
    while(fast->next!=NULL&&fast->next->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
        
    slow->next = reverse(slow->next);
    slow = slow->next;
    node* dummy = head;
        
    while(slow!=NULL) {
        if(dummy->data != slow->data) return false;
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
}
int main()
{
    node* head = NULL;
       insertNode(head,1);
       insertNode(head,2);
       insertNode(head,3);
       insertNode(head,2);
       insertNode(head,1);
       isPalindrome(head)? cout<<"True" : cout<<"False";
}
