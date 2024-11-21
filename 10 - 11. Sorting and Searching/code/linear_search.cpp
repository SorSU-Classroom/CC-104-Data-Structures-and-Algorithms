#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &arr, int key) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {10, 50, 30, 70, 80, 60, 20, 90, 40};
    int key = 30;

    int index = linearSearch(arr, key);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}