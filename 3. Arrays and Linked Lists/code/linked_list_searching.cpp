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

    int searchValue = 17;
    Node *temp = head;
    int position = 1;

    cout << "Searching for element: " << searchValue << endl;

    while (temp != NULL) {
        if (temp->data == searchValue) {
            break;
        }
        temp = temp->next;
        position++;
    }

    if (temp == NULL) {
        cout << searchValue << " not found in the list." << endl;
    } else {
        cout << searchValue << " found at position: " << position << endl;
    }

    return 0;
}