// fibonacci.cpp
#include <iostream>

int main() {
    int n;
    std::cout << "How many Fibonacci numbers? ";
    std::cin >> n;

    if (n <= 0) return 0;
    long long a = 0, b = 1, next;
    std::cout << "Fibonacci: " << a;
    if (n > 1) std::cout << ", " << b;
    for (int i = 2; i < n; ++i) {
        next = a + b;
        std::cout << ", " << next;
        a = b;
        b = next;
    }
    std::cout << "\n";
    return 0;
}
