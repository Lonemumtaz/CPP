// password_checker.cpp
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string password;
    std::cout << "Enter a password: ";
    std::getline(std::cin, password);

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    int score = 0;

    for (char c : password) {
        if (std::isupper(c)) hasUpper = true;
        else if (std::islower(c)) hasLower = true;
        else if (std::isdigit(c)) hasDigit = true;
        else hasSpecial = true;
    }

    if (password.length() >= 8) score++;
    if (hasUpper && hasLower) score++;
    if (hasDigit) score++;
    if (hasSpecial) score++;

    std::cout << "Password strength: ";
    if (score <= 1) std::cout << "Weak\n";
    else if (score == 2) std::cout << "Medium\n";
    else std::cout << "Strong\n";

    return 0;
}
