// multiplication_table.cpp
#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cout << "Enter a number (1–12): ";
    std::cin >> n;

    if (n < 1 || n > 12) {
        std::cout << "Please enter between 1 and 12.\n";
        return 1;
    }

    std::cout << "\nMultiplication Table (1 to " << n << ")\n";
    std::cout << "   ";
    for (int i = 1; i <= n; ++i) std::cout << std::setw(4) << i;
    std::cout << "\n   ";
    for (int i = 1; i <= n; ++i) std::cout << "----";
    std::cout << "\n";

    for (int i = 1; i <= n; ++i) {
        std::cout << std::setw(2) << i << " |";
        for (int j = 1; j <= n; ++j) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << "\n";
    }
    return 0;
}
