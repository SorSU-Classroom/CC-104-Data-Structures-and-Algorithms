#include <iostream>
#include <vector>
using namespace std;

int getMax(vector<int> &arr, int n) {
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

void countingSort(vector<int> &arr, int n, int exp) {
    vector<int> output(n);
    vector<int> count(10, 0);

    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void radixSort(vector<int> &arr) {
    int n = arr.size();
    int max_val = getMax(arr, n);

    for (int exp = 1; max_val / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}

void printArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    cout << "Original Array: ";
    printArray(arr);

    radixSort(arr);

    cout << "Sorted Array: ";
    printArray(arr);

    return 0;
}