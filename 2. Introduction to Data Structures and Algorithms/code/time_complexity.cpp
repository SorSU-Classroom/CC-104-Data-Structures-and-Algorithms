/**
 * Time Complexity
 */

#include <iostream>
using namespace std;

// declaration of functions
int binarySearch(int arr[], int n, int x);
int findMax(int arr[], int n);
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
void bubbleSort(int arr[], int n);
int fibonacci(int n);
void permute(string str, int l, int r);

int main() {
    // Constant time complexity (O(1))
    int arr[5] = {1, 2, 3, 4, 5};
    int x = arr[2]; // Accessing the element at index 2
    cout << "Element at index 2: " << x << endl;

    // Logarithmic time complexity (O(log n))
    int index = binarySearch(arr, 5, 3);
    cout << "Element found at index: " << index << endl;

    // Linear time complexity (O(n))
    int max = findMax(arr, 5);
    cout << "Maximum element: " << max << endl;

    // Linearithmic time complexity (O(n log n))
    int arr2[5] = {12, 11, 13, 5, 6};
    mergeSort(arr2, 0, 4);
    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // Quadratic time complexity (O(n^2))
    bubbleSort(arr2, 5);
    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // Exponential time complexity (O(2^n))
    int fib = fibonacci(5);
    cout << "Fibonacci number at index 5: " << fib << endl;

    // Factorial time complexity (O(n!))
    cout << "Permutations: " << endl;
    string str = "ABC";
    permute(str, 0, 2);

    return 0;
}

// Logarithmic time complexity (O(log n))
int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Linear time complexity (O(n))
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Linearithmic time complexity (O(n log n))
void merge(int arr[], int l, int m, int r) {
    // Merge two subarrays of arr[]
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int *L = new int[n1];
    int *R = new int[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// Quadratic time complexity (O(n^2))
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Exponential time complexity (O(2^n))
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Factorial time complexity (O(n!))
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