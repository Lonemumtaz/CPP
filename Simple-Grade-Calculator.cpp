// grade_calculator.cpp
#include <iostream>

int main() {
    double marks[3];
    std::string subjects[] = {"Math", "Science", "English"};
    double sum = 0;

    for (int i = 0; i < 3; ++i) {
        std::cout << "Enter marks for " << subjects[i] << " (0–100): ";
        std::cin >> marks[i];
        if (marks[i] < 0) marks[i] = 0;
        if (marks[i] > 100) marks[i] = 100;
        sum += marks[i];
    }

    double avg = sum / 3.0;
    char grade;
    if (avg >= 90) grade = 'A';
    else if (avg >= 75) grade = 'B';
    else if (avg >= 60) grade = 'C';
    else if (avg >= 45) grade = 'D';
    else grade = 'F';

    std::cout << "Average: " << avg << "\n";
    std::cout << "Grade: " << grade << "\n";
    return 0;
}
