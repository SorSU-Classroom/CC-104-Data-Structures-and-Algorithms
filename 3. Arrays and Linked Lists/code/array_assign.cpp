#include <iostream>
using namespace std;

int main() {
    int arr[6];
    arr[0] = 19;
    arr[1] = 10;
    arr[2] = 8;

    cout << "Array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}