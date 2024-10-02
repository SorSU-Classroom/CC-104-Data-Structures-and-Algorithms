#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q = queue<int>({19, 10, 8});

    q.push(17);
    q.push(9);
    q.push(15);

    cout << "The queue is: ";
    for (int i = 0; i < 6; i++) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}