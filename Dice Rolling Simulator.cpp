// dice_simulator.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int choice, dice1, dice2;

    std::cout << "Dice Roller\n";
    std::cout << "1. Roll one die\n";
    std::cout << "2. Roll two dice\n";
    std::cout << "Choice: ";
    std::cin >> choice;

    if (choice == 1) {
        dice1 = std::rand() % 6 + 1;
        std::cout << "You rolled: " << dice1 << "\n";
    } 
    else if (choice == 2) {
        dice1 = std::rand() % 6 + 1;
        dice2 = std::rand() % 6 + 1;
        std::cout << "You rolled: " << dice1 << " and " << dice2;
        std::cout << " (sum = " << dice1 + dice2 << ")\n";
    }
    else {
        std::cout << "Invalid choice.\n";
    }
    return 0;
}
