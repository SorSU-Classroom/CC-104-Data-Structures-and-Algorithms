/**
 * This file contains an implementation of non-primitive data types in C++.
 */

#include <cstring> // for strcpy
#include <iostream>
#include <string> // for string

using namespace std;

// structure
struct Person {
    char name[50];
    int age;
    float height;
};

// class
class Circle {
  private:
    float radius;

  public:
    float getArea() { return 3.14 * radius * radius; }
};

int main() {
    // array
    int array[5] = {1, 2, 3, 4, 5};
    cout << "Array: ";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // string using character array
    char charArray[] = "Hello, world!";
    cout << "String using character array: " << charArray << endl;

    // string
    string str = "Hello, world!";
    cout << "String: " << str << endl;

    // structure
    Person person;
    strcpy(person.name, "John Doe");
    person.age = 30;
    person.height = 5.8;
    cout << "Person: " << person.name << ", " << person.age << ", "
         << person.height << endl;

    // class
    Circle circle;
    cout << "Circle Area: " << circle.getArea() << endl;

    // pointer
    int x = 10;
    int *ptr = &x;
    cout << "Pointer: " << *ptr << endl;

    return 0;
}