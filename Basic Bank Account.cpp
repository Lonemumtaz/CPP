// bank_account.cpp
#include <iostream>
#include <string>

class BankAccount {
private:
    std::string owner;
    double balance;
public:
    BankAccount(std::string name, double initial = 0) : owner(name), balance(initial) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << "\n";
        } else std::cout << "Invalid amount.\n";
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << "\n";
        } else std::cout << "Insufficient funds or invalid amount.\n";
    }

    void showBalance() {
        std::cout << "Balance: $" << balance << "\n";
    }
};

int main() {
    std::string name;
    std::cout << "Enter account holder name: ";
    std::getline(std::cin, name);
    BankAccount acc(name);

    int choice;
    double amount;
    do {
        std::cout << "\n1. Deposit\n2. Withdraw\n3. Show balance\n4. Exit\nChoice: ";
        std::cin >> choice;
        switch(choice) {
            case 1: std::cout << "Amount to deposit: "; std::cin >> amount; acc.deposit(amount); break;
            case 2: std::cout << "Amount to withdraw: "; std::cin >> amount; acc.withdraw(amount); break;
            case 3: acc.showBalance(); break;
            case 4: std::cout << "Goodbye!\n"; break;
            default: std::cout << "Invalid choice.\n";
        }
    } while (choice != 4);
    return 0;
}
