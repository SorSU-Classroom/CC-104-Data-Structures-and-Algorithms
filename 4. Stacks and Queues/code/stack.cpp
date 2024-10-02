// Stack Creation
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s = stack<int>({19, 10, 8});
    s.push(17);
    s.push(9);
    s.push(15);

    cout << "The stack is: ";
    for (int i = 0; i < 6; i++) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}