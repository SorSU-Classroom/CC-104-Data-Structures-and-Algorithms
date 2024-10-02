#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> s);

int main() {
    stack<int> s = stack<int>({19, 10, 8, 17, 9, 15});

    printStack(s);
    s.pop(); // Removes 15

    printStack(s);
    s.pop(); // Removes 9

    printStack(s);
    s.pop(); // Removes 17

    printStack(s);
    s.pop(); // Removes 8

    printStack(s);
    s.pop(); // Removes 10

    printStack(s);
    s.pop(); // Removes 19

    return 0;
}

void printStack(stack<int> s) {
    stack<int> temp = s;
    for (int i = 0; i < s.size(); i++) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}