#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s = stack<int>({19, 10, 8, 17, 9, 15});

    cout << "Top Element: " << s.top() << endl;

    return 0;
}