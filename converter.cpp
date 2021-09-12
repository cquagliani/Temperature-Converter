#include <iostream>
using namespace std;

void FahrenheitToCelsius();
void FahrenheitToKelvin();
void CelsiusToFahrenheit();
void CelsiusToKelvin();
void KelvinToFahrenheit();
void KelvinToCelsius();

// Global Variables
double celsius_temp, fahrenheit_temp, kelvin_temp;

int main() {
    unsigned int menuOption;

    cout << "***********MENU**********" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Fahrenheit to Kelvin" << endl;
    cout << "3. Celsius to Fahrenheit" << endl;
    cout << "4. Celsius to Kelvin" << endl;
    cout << "5. Kelvin to Fahrenheit." << endl;
    cout << "6. Kelvin to Celsius" << endl;
    cout << "************************" << endl;

    // Verifies data type
    while (!(cin >> menuOption)) {
        cout << "Please enter a valid input." << endl;
        cin.clear();
        cin.ignore(123, '\n');
        main();
    }

    // Executes appropriate function depending on which menu option is selected by user
    switch (menuOption) {
    case 1:
        FahrenheitToCelsius();
        break;
    case 2:
        FahrenheitToKelvin();
        break;
    case 3:
        CelsiusToFahrenheit();
        break;
    case 4:
        CelsiusToKelvin();
        break;
    case 5:
        KelvinToFahrenheit();
        break;
    case 6:
        KelvinToCelsius();
        break;
    default:
        break;
    }
    return 0;
}

void FahrenheitToCelsius() {
    cout << "Please enter a temperature in Fahrenheit: ";

    // Verifies data type
    while (!(cin >> fahrenheit_temp)) {
        cout << "Please enter a valid input: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    celsius_temp = (fahrenheit_temp - 32.0) * (5.0 / 9.0);

    cout << fahrenheit_temp << " degrees Fahrenheit is " << celsius_temp << " degrees Celsius." << endl;
}

void FahrenheitToKelvin() {
    cout << "Please enter a temperature in Fahrenheit: ";

    // Verifies data type
    while (!(cin >> fahrenheit_temp)) {
        cout << "Please enter a valid input: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    kelvin_temp = (fahrenheit_temp - 32.0) * (5.0 / 9.0) + 273.15;
    cout << fahrenheit_temp << " degrees Fahrenheit is " << kelvin_temp << " degrees Kelvin." << endl;
}

void CelsiusToFahrenheit() {
    cout << "Please enter a temperature in Celsius: ";

    // Verifies data type
    while (!(cin >> celsius_temp)) {
        cout << "Please enter a valid input: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    fahrenheit_temp = (celsius_temp * (9.0 / 5.0)) + (32.0);

    cout << celsius_temp << " degrees Celsius is " << fahrenheit_temp << " degrees Fahrenheit." << endl;
}

void CelsiusToKelvin() {
    cout << "Please enter a temperature in Celsius: ";

    // Verifies data type
    while (!(cin >> celsius_temp)) {
        cout << "Please enter a valid input: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    kelvin_temp = celsius_temp + 273.15;

    cout << celsius_temp << " degrees Celsius is " << kelvin_temp << " degrees Kelvin." << endl;
}

void KelvinToFahrenheit() {
    cout << "Please enter a temperature in Kelvin: ";

    // Verifies data type
    while (!(cin >> kelvin_temp)) {
        cout << "Please enter a valid input: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    fahrenheit_temp = (kelvin_temp - 273.15) * (9.0 / 5.0) + 32;

    cout << kelvin_temp << " degrees Kelvin is " << fahrenheit_temp << " degrees Fahrenheit." << endl;
}

void KelvinToCelsius() {
    cout << "Please enter a temperature in Kelvin: ";

    // Verifies data type
    while (!(cin >> kelvin_temp)) {
        cout << "Please enter a valid input: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    celsius_temp = kelvin_temp - 273.15;

    cout << kelvin_temp << " degrees Kelvin is " << celsius_temp << " degrees Celsius." << endl;
}