// temperature_converter.cpp
#include <iostream>

int main() {
    int choice;
    double temp, converted;

    std::cout << "Temperature Converter\n";
    std::cout << "1. Celsius to Fahrenheit\n";
    std::cout << "2. Fahrenheit to Celsius\n";
    std::cout << "Choice: ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Enter Celsius: ";
        std::cin >> temp;
        converted = (temp * 9.0 / 5.0) + 32;
        std::cout << temp << "°C = " << converted << "°F\n";
    } 
    else if (choice == 2) {
        std::cout << "Enter Fahrenheit: ";
        std::cin >> temp;
        converted = (temp - 32) * 5.0 / 9.0;
        std::cout << temp << "°F = " << converted << "°C\n";
    }
    else {
        std::cout << "Invalid choice.\n";
    }
    return 0;
}
