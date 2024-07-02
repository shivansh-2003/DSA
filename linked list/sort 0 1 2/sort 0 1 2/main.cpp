#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


void insertElement(node* &head, int data) {
    node* newnode = new node(data);
    if (head == NULL) {
        head = newnode;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}

node* sort(node* head) {
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;
    node* temp = head;
    while (temp != NULL) {
        if (temp->data == 0)
            zerocount++;
        else if (temp->data == 1)
            onecount++;
        else
            twocount++;
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL) {
        if (zerocount != 0) {
            temp->data = 0;
            zerocount--;
        }
        else if (onecount != 0) {
            temp->data = 1;
            onecount--;
        }
        else {
            temp->data = 2;
            twocount--;
        }
        temp = temp->next;
    }
    return head;
}

void printList(node* head) {
    while (head != NULL) {
        cout << " " << head->data;
        head = head->next;
    }
}

int main() {
    node* head = NULL;

    // Insert elements into the linked list
    insertElement(head, 0);
    insertElement(head, 2);
    insertElement(head, 1);
    insertElement(head, 0);
    insertElement(head, 2);

    cout << "Original Linked List: ";
    printList(head);

    head = sort(head);

    cout << "\nSorted Linked List: ";
    printList(head);

    return 0;
}
