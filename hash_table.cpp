// hash_table.cpp
// Simple hash table implementation using linear probing in C++

#include <iostream>
using namespace std;

#define SIZE 10

class HashTable {
    int table[SIZE];
public:
    HashTable() { for (int i = 0; i < SIZE; i++) table[i] = -1; }
    void insert(int key);
    bool search(int key);
};

void HashTable::insert(int key) {
    int index = key % SIZE;
    int start = index;
    while (table[index] != -1) {
        index = (index + 1) % SIZE;
        if (index == start) {
            cout << "Hash table is full\n";
            return;
        }
    }
    table[index] = key;
}

bool HashTable::search(int key) {
    int index = key % SIZE;
    int start = index;
    while (table[index] != -1) {
        if (table[index] == key) return true;
        index = (index + 1) % SIZE;
        if (index == start) break;
    }
    return false;
}

int main() {
    HashTable ht;
    ht.insert(5);
    ht.insert(15);
    ht.insert(25);
    cout << "Is 15 present? " << (ht.search(15) ? "Yes" : "No") << endl;
    cout << "Is 35 present? " << (ht.search(35) ? "Yes" : "No") << endl;
    return 0;
}
