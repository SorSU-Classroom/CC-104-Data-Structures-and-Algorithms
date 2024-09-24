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
    sixth->next = first;

    first->prev = sixth;
    second->prev = first;
    third->prev = second;
    fourth->prev = third;
    fifth->prev = fourth;
    sixth->prev = fifth;

    // Print the linked list
    cout << "Circular Linked List from first to sixth: ";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;

        if (head == sixth) {
            cout << endl
                 << endl
                 << "Next Node is " << head->next->data
                 << " which is the first element" << endl;
            break;
        }
    }

    cout << endl;
    head = sixth;

    // Print the linked list
    cout << "Circular Linked List from sixth to first: ";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->prev;

        if (head == first) {
            cout << endl
                 << endl
                 << "Previous Node is " << head->prev->data
                 << " which is the sixth element" << endl;
            break;
        }
    }

    return 0;
}