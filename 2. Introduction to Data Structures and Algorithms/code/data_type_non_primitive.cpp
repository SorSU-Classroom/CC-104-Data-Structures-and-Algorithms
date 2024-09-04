/**
 * This file contains an implementation of non-primitive data types in C++.
 */

#include <cstring> // for strcpy
#include <iostream>
#include <list>          // for list
#include <map>           // for map
#include <queue>         // for queue
#include <set>           // for set
#include <stack>         // for stack
#include <string>        // for string
#include <unordered_map> // for unordered_map
#include <unordered_set> // for unordered_set
#include <vector>        // for vector

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

// Singly Linked List Node
class LinkedListNode {
  public:
    int data;
    LinkedListNode *next;
};

// Doubly Linked List Node
class DoublyLinkedListNode {
  public:
    int data;
    DoublyLinkedListNode *prev;
    DoublyLinkedListNode *next;
};

// Circular Linked List Node
class CircularLinkedListNode {
  public:
    int data;
    CircularLinkedListNode *next;
};

// Doubly Circular Linked List Node
class DoublyCircularLinkedListNode {
  public:
    int data;
    DoublyCircularLinkedListNode *prev;
    DoublyCircularLinkedListNode *next;
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

    // vector
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // list
    list<int> list = {1, 2, 3, 4, 5};
    cout << "List: ";
    for (auto it = list.begin(); it != list.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // stack
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.pop();
    cout << "Stack: ";
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    // queue
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.pop();
    cout << "Queue: ";
    while (!que.empty()) {
        cout << que.front() << " ";
        que.pop();
    }
    cout << endl;

    // Priority Queue
    priority_queue<int> pq;
    pq.push(1);
    pq.push(4);
    pq.push(2);
    pq.push(3);
    pq.pop();
    cout << "Priority Queue: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // Deque
    deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.pop_front();
    cout << "Deque: ";
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << endl;

    // Hash Map
    // Ordered Map
    map<string, int> mp;
    mp["3"] = 3;
    mp["1"] = 1;
    mp["2"] = 2;
    cout << "Map: " << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }
    cout << endl;

    // Unordered Map
    unordered_map<string, int> ump;
    ump["3"] = 3;
    ump["1"] = 1;
    ump["2"] = 2;
    cout << "Unordered Map: " << endl;
    for (auto it = ump.begin(); it != ump.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }
    cout << endl;

    // Set
    // Ordered Set
    set<int> st;
    st.insert(3);
    st.insert(1);
    st.insert(2);
    cout << "Set: " << endl;
    for (auto it = st.begin(); it != st.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Unordered Set
    unordered_set<int> ust;
    ust.insert(3);
    ust.insert(1);
    ust.insert(2);
    cout << "Unordered Set: " << endl;
    for (auto it = ust.begin(); it != ust.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}