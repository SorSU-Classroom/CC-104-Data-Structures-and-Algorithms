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
    sixth->next = head;

    // Print the linked list
    cout << "Circular Linked List: ";
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

    return 0;
}