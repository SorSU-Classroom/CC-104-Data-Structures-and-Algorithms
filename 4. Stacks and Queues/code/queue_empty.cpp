#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q = queue<int>({19, 10, 8, 17, 9, 15});

    // Remove all elements from the queue
    // while (!q.empty()) {
    //     q.pop();
    // }

    cout << "Is Queue Empty: " << (q.empty() ? "true" : "false") << endl;

    return 0;
}