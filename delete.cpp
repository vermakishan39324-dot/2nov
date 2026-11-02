
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void insertathead(node*& head, int value) {
    node* newnode = new node();

    newnode->data = value;
    newnode->next = head;

    head = newnode;
}

void display(node* head) {
    node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

// Delete node from head
void deleteathead(node*& head) {
    if (head == NULL) {
        cout << "Linked list is empty";
        return;
    }

    node* temp = head;
    head = head->next;

    delete temp;
}

int main() {
    node* head = NULL;

    insertathead(head, 10);
    insertathead(head, 20);
    insertathead(head, 30);

    cout << "Before deletion: ";
    display(head);

    deleteathead(head);

    cout << "After deletion: ";
    display(head);

    return 0;
}
