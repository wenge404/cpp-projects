#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;
    char choice;

    do {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter an operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;

        switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error! Division by zero is not allowed.\n";
                continue; 
            }
            break;
        default:
            cout << "Invalid operator! Please use +, -, *, or /.\n";
            continue; 
        }

        cout << "Result: " << result << endl;

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Calculator exiting... Thank you!\n";
    return 0;
}
