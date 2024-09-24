#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
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

    second->prev = first;
    third->prev = second;
    fourth->prev = third;
    fifth->prev = fourth;
    sixth->prev = fifth;

    // Print the linked list from head to tail
    cout << "Double Linked List (Head to Tail): ";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;

    // Print the linked list from tail to head
    cout << "Double Linked List (Tail to Head): ";
    while (sixth != NULL) {
        cout << sixth->data << " ";
        sixth = sixth->prev;
    }

    return 0;
}