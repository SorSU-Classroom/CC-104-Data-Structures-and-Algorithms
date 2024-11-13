#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    int sum;

    cout << "Enter 1st number: ";
    cin >> num1;
    cout << " " << num1 << endl;

    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << " " << num2 << endl;

    cout << "Enter 3rd number: ";
    cin >> num3;
    cout << " " << num3 << endl;

    sum = num1 + num2 + num3;

    cout << "Sum of the three numbers: " << sum << endl;

    return 0;
}