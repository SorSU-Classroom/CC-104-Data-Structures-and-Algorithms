#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // Print the array using index
    cout << "First element: " << arr[0] << endl;  // Output: 1
    cout << "Second element: " << arr[1] << endl; // Output: 2

    // Print the array elements using pointer arithmetic
    cout << "First element: " << *ptr << endl;        // Output: 1
    cout << "Second element: " << *(ptr + 1) << endl; // Output: 2

    return 0;
}