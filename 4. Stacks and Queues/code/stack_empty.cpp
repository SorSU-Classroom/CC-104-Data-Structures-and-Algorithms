#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s = stack<int>({19, 10, 8, 17, 9, 15});

    // Remove all elements from the stack
    // while (!s.empty()) {
    //     s.pop();
    // }

    cout << "Is Stack Empty: " << (s.empty() ? "true" : "false") << endl;

    return 0;
}