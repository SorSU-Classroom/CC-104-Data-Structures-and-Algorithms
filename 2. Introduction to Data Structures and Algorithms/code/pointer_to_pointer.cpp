#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;
    int **pptr = &ptr;

    cout << **pptr; // Output: 10

    return 0;
}