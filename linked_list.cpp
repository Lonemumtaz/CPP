// linked_list.cpp
// Implementation and basic operations of a singly linked list in C++

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}
    void insertAtEnd(int value);
    void display();
};

void LinkedList::insertAtEnd(int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

void LinkedList::display() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    cout << "Linked List: ";
    list.display();
    return 0;
}
