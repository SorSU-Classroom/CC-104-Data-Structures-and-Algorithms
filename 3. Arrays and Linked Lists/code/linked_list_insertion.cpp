#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int main() {
    Node *first = new Node(19);
    Node *second = new Node(10);
    Node *third = new Node(8);
    Node *fourth = new Node(17);
    Node *fifth = new Node(9);
    Node *sixth = new Node(15);

    Node *head = first;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    // Print the linked list
    cout << "Single Linked List before insertion: ";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;

    head = first;

    Node *newNode = new Node(12);
    Node *temp = head;
    int index = 2;

    for (int i = 0; i < index - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    // Print the linked list
    cout << "Single Linked List after insertion: ";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}