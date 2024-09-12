#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;

    // Output address of x and ptr
    cout << "Address of x: " << &x
         << endl; // Output: Address of x: 0x7fffbf7b3bdc
    cout << "Address of ptr: " << &ptr
         << endl; // Output: Address of ptr: 0x7fffbf7b3bd0

    cout << *ptr << endl; // Output: 10

    return 0;
}