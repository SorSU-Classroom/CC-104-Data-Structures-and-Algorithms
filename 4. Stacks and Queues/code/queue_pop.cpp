#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> q);

int main() {
    queue<int> q = queue<int>({19, 10, 8, 17, 9, 15});

    printQueue(q);
    q.pop(); // Remove 19

    printQueue(q);
    q.pop(); // Remove 10

    printQueue(q);
    q.pop(); // Remove 8

    printQueue(q);
    q.pop(); // Remove 17

    printQueue(q);
    q.pop(); // Remove 9

    printQueue(q);
    q.pop(); // Remove 15

    return 0;
}

void printQueue(queue<int> q) {
    cout << "The queue is: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}