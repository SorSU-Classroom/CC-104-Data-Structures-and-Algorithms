#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q = queue<int>({19, 10, 8, 17, 9, 15});

    cout << "Back Element: " << q.back() << endl;

    return 0;
}