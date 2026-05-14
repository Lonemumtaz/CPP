// guessing_game.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int secret = std::rand() % 100 + 1;
    int guess = 0, attempts = 0;

    std::cout << "Guess the number (1–100):\n";
    while (guess != secret) {
        std::cout << "Your guess: ";
        std::cin >> guess;
        attempts++;
        if (guess < secret) std::cout << "Too low!\n";
        else if (guess > secret) std::cout << "Too high!\n";
    }
    std::cout << "Correct! It took you " << attempts << " attempts.\n";
    return 0;
}
