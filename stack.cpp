// stack.cpp
// Implementation of stack using array in C++

#include <iostream>
using namespace std;

class Stack {
    int top;
    int arr[100];
public:
    Stack() { top = -1; }
    void push(int x);
    int pop();
    bool isEmpty();
};

void Stack::push(int x) {
    if (top >= 99) {
        cout << "Stack Overflow\n";
        return;
    }
    arr[++top] = x;
}

int Stack::pop() {
    if (top < 0) {
        cout << "Stack Underflow\n";
        return -1;
    }
    return arr[top--];
}

bool Stack::isEmpty() {
    return top < 0;
}

int main() {
    Stack s;
    s.push(5);
    s.push(10);
    cout << "Popped: " << s.pop() << endl;
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    return 0;
}
