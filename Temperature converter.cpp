#include <iostream>

using namespace std;

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    int choice;
    double temperature;
    
    cout << "Temperature Conversion\n";
    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Celsius to Fahrenheit\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            cout << temperature << " Fahrenheit is " << fahrenheitToCelsius(temperature) << " Celsius.\n";
            break;
        case 2:
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            cout << temperature << " Celsius is " << celsiusToFahrenheit(temperature) << " Fahrenheit.\n";
            break;
        default:
            cout << "Invalid choice. Please enter 1 or 2.\n";
            break;
    }
    
    return 0;
}


