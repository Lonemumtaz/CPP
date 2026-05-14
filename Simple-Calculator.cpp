// calculator.cpp
#include <iostream>

int main() {
    double a, b;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter second number: ";
    std::cin >> b;

    switch (op) {
        case '+': std::cout << a << " + " << b << " = " << a + b << "\n"; break;
        case '-': std::cout << a << " - " << b << " = " << a - b << "\n"; break;
        case '*': std::cout << a << " * " << b << " = " << a * b << "\n"; break;
        case '/': 
            if (b != 0) std::cout << a << " / " << b << " = " << a / b << "\n";
            else std::cout << "Error: Division by zero.\n";
            break;
        default: std::cout << "Invalid operator.\n";
    }
    return 0;
}
