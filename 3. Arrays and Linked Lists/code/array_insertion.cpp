#include <iostream>
using namespace std;

int main() {
    int arr[100] = {19, 10, 8, 17, 9, 15};
    int n = 6;
    int index = 2;
    int value = 12;

    cout << "Before Insertion: " << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    /**
     * To insert an element at a given index, we need to shift all the elements
     * from the given index to the right by one position and then insert the
     * element at the given index.
     */
    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = value;
    n++;

    cout << "After Insertion: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}