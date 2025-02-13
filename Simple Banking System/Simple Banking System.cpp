// Simple Banking System.cpp : 
//

#include <iostream>

using namespace std;

double balance = 0.0; // Global variable to store balance

// Function to deposit money
void deposit() {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount > 0) {
        balance += amount;
        cout << "Deposit successful! New balance: $" << balance << endl;
    }
    else {
        cout << "Invalid amount! Deposit must be greater than zero.\n";
    }
}

// Function to withdraw money
void withdraw() {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > balance) {
        cout << "Insufficient balance! Your balance is $" << balance << endl;
    }
    else if (amount > 0) {
        balance -= amount;
        cout << "Withdrawal successful! New balance: $" << balance << endl;
    }
    else {
        cout << "Invalid amount! Withdrawal must be greater than zero.\n";
    }
}

// Function to check balance
void checkBalance() {
    cout << "Your current balance is: $" << balance << endl;
}

// Main menu function
void menu() {
    int choice;
    do {
        cout << "\nBanking System Menu:\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            deposit();
            break;
        case 2:
            withdraw();
            break;
        case 3:
            checkBalance();
            break;
        case 4:
            cout << "Thank you for using our banking system. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
}

int main() {
    menu();
    return 0;
}
