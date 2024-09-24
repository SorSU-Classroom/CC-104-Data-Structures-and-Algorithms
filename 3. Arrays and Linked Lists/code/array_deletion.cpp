#include <iostream>
using namespace std;

int main() {
    int arr[100] = {19, 10, 8, 17, 9, 15};
    int n = 6;
    int index = 2;

    cout << "Before Deletion: " << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    /**
     * To delete an element at a given index, we need to shift all the elements
     * from the given index to the left by one position and then delete the
     * element at the given index.
     */
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "After Deletion: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}