// Stack Creation
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(19);
    s.push(10);
    s.push(8);
    s.push(17);
    s.push(9);
    s.push(15);

    for (int i = 0; i < 6; i++) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}