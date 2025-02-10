#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

void numberGuessingGame() {
    srand(time(0)); // Seed random number generator
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess, attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100. Try to guess it!\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (cin.fail()) { // Handle non-integer input
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Please enter a number.\n";
            continue;
        }

        if (guess < 1 || guess > 100) {
            cout << "Please enter a number between 1 and 100.\n";
            continue;
        }

        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        }
        else {
            cout << "Congratulations! You guessed the number " << secretNumber
                << " in " << attempts << " attempts.\n";
            break; // Exit the loop when the correct guess is made
        }
    }
}

int main() {
    numberGuessingGame();
    return 0;
}
