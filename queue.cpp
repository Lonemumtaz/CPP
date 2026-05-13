// queue.cpp
// Implementation of queue using array in C++

#include <iostream>
using namespace std;

class Queue {
    int front, rear;
    int arr[100];
public:
    Queue() { front = rear = -1; }
    void enqueue(int x);
    int dequeue();
    bool isEmpty();
};

void Queue::enqueue(int x) {
    if (rear == 99) {
        cout << "Queue Overflow\n";
        return;
    }
    if (front == -1) front = 0;
    arr[++rear] = x;
}

int Queue::dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
        return -1;
    }
    return arr[front++];
}

bool Queue::isEmpty() {
    return (front == -1 || front > rear);
}

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    return 0;
}
