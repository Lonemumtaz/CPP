// simple_todo.cpp
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> tasks;
    int choice;
    std::string task;

    while (true) {
        std::cout << "\n--- To-Do List ---\n";
        std::cout << "1. Add task\n2. View tasks\n3. Delete task\n4. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;
        std::cin.ignore(); // clear newline

        if (choice == 1) {
            std::cout << "Enter task: ";
            std::getline(std::cin, task);
            tasks.push_back(task);
            std::cout << "Task added.\n";
        }
        else if (choice == 2) {
            if (tasks.empty()) std::cout << "No tasks.\n";
            else {
                for (size_t i = 0; i < tasks.size(); ++i)
                    std::cout << i+1 << ". " << tasks[i] << "\n";
            }
        }
        else if (choice == 3) {
            int index;
            std::cout << "Task number to delete: ";
            std::cin >> index;
            if (index >= 1 && index <= static_cast<int>(tasks.size())) {
                tasks.erase(tasks.begin() + index - 1);
                std::cout << "Deleted.\n";
            } else std::cout << "Invalid number.\n";
        }
        else if (choice == 4) break;
        else std::cout << "Invalid choice.\n";
    }
    return 0;
}
