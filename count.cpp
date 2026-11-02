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

void count(node* head) {
    int c = 0;
    node* temp = head;

    while (temp != NULL) {
        c++;
        temp = temp->next;
    }

    cout << "Total nodes = " << c;
}

int main() {
    node* head = NULL;

    insertathead(head, 10);
    insertathead(head, 20);
    insertathead(head, 30);

    count(head);

    return 0;
}