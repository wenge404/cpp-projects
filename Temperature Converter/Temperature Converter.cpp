#include <iostream>

using namespace std;

// Function to convert Celsius to Fahrenheit and Kelvin
void fromCelsius() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9 / 5) + 32;
    double kelvin = celsius + 273.15;

    cout << "Fahrenheit: " << fahrenheit << "°F" << endl;
    cout << "Kelvin: " << kelvin << "K" << endl;
}

// Function to convert Fahrenheit to Celsius and Kelvin
void fromFahrenheit() {
    double fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) * 5 / 9;
    double kelvin = celsius + 273.15;

    cout << "Celsius: " << celsius << "°C" << endl;
    cout << "Kelvin: " << kelvin << "K" << endl;
}

// Function to convert Kelvin to Celsius and Fahrenheit
void fromKelvin() {
    double kelvin;
    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;

    double celsius = kelvin - 273.15;
    double fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Celsius: " << celsius << "°C" << endl;
    cout << "Fahrenheit: " << fahrenheit << "°F" << endl;
}

// Main menu function
void menu() {
    int choice;
    do {
        cout << "\nTemperature Converter Menu:\n";
        cout << "1. Convert from Celsius\n";
        cout << "2. Convert from Fahrenheit\n";
        cout << "3. Convert from Kelvin\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            fromCelsius();
            break;
        case 2:
            fromFahrenheit();
            break;
        case 3:
            fromKelvin();
            break;
        case 4:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);
}

int main() {
    menu();
    return 0;
}
