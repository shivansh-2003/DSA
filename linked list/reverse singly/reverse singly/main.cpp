#include <iostream>
using namespace std;
class solution {
public:
    int val;
    solution *next;
    solution():val(0),next(nullptr)
    {}
    solution(int x):val(x),next(nullptr)
    {this->val=val;}
    solution(int x,solution *next):val(x),next(next)
    {}
};
class Solution
{
public:
    solution* reverseList(solution* head)
    {
        solution *newhead=NULL;
        while(head!=NULL)
        {
            solution *newhead=head->next;
            head->next=newhead;
            newhead=head;
           
        }
        return newhead;
    }
};
int main()
{
    solution *head = new solution(1);
        head->next = new solution(2);
        head->next->next = new solution(3);
        head->next->next->next = new solution(4);
        head->next->next->next->next = new solution(5);

        // Printing the original list
        cout << "Original List: ";
        solution *curr = head;
        while (curr != nullptr) {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;

        // Reversing the list
        Solution obj;
        solution *newHead = obj.reverseList(head);

        // Printing the reversed list
        cout << "Reversed List: ";
        curr = newHead;
        while (curr != nullptr) {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;

        return 0;
    
}
