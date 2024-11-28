#include <iostream>
#include <vector>
using namespace std;

vector<int> countingSort(vector<int> &inputArray) {
    int N = inputArray.size();

    int M = 0;

    for (int i = 0; i < N; i++) {
        M = max(M, inputArray[i]);
    }

    vector<int> countArray(M + 1, 0);

    for (int i = 0; i < N; i++) {
        countArray[inputArray[i]]++;
    }

    for (int i = 1; i <= M; i++) {
        countArray[i] += countArray[i - 1];
    }

    vector<int> outputArray(N);

    for (int i = N - 1; i >= 0; i--) {
        outputArray[countArray[inputArray[i]] - 1] = inputArray[i];
        countArray[inputArray[i]]--;
    }

    return outputArray;
}

void printArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2, 5, 3, 0, 2, 3, 0, 3};

    cout << "Original Array: ";
    printArray(arr);

    vector<int> sortedArray = countingSort(arr);

    cout << "Sorted Array: ";
    printArray(sortedArray);

    return 0;
}