/**
 * Space complexity
 */

#include <iostream>
#include <vector>
using namespace std;

// declaration of functions
void swap(int &a, int &b);
void reverseArray(int arr[], int n);
void allPairs(int arr[], int n);
void generateSubsets(int arr[], int n);
void permute(string str, int l, int r);

int main() {
    // Constant space complexity (O(1))
    int a = 10, b = 20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    // Linear space complexity (O(n))
    int arr[] = {1, 2, 3, 4, 5};
    reverseArray(arr, 5);
    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Quadratic space complexity (O(n^2))
    allPairs(arr, 5);
    cout << "All pairs: " << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i] << " + " << arr[j] << " = " << arr[i] + arr[j]
                 << endl;
        }
    }
    cout << endl;

    // Exponential space complexity (O(2^n))
    cout << "Subsets: " << endl;
    generateSubsets(arr, 4);
    cout << endl;

    // Factorial space complexity (O(n!))
    cout << "Permutations: " << endl;
    string str = "ABC";
    permute(str, 0, 2);

    return 0;
}

// Constant space complexity (O(1))
void swap(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

// Linear space complexity (O(n))
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Quadratic space complexity (O(n^2))
void allPairs(int arr[], int n) {
    vector<int> pairs(n * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            pairs[i * n + j] = arr[i] + arr[j];
        }
    }
}

// Exponential space complexity (O(2^n))
void generateSubsets(int arr[], int n) {
    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            if (i & (1 << j))
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}

// Factorial space complexity (O(n!))
void permute(string str, int l, int r) {
    if (l == r)
        cout << str << endl;
    else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]);
            permute(str, l + 1, r);
            swap(str[l], str[i]);
        }
    }
}