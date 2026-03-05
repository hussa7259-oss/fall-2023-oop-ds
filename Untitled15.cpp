#include <iostream>
using namespace std;

int main() {
    int choice;
    double value, result;

    cout << "Conversion Menu:\n";
    cout << "1 ? Convert Kilometers to Meters\n";
    cout << "2 ? Convert Meters to Centimeters\n";
    cout << "3 ? Convert Kilograms to Grams\n";
    cout << "4 ? Convert Celsius to Fahrenheit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter value in Kilometers: ";
            cin >> value;
            result = value * 1000;
            cout << "Meters = " << result << endl;
            break;

        case 2:
            cout << "Enter value in Meters: ";
            cin >> value;
            result = value * 100;
            cout << "Centimeters = " << result << endl;
            break;

        case 3:
            cout << "Enter value in Kilograms: ";
            cin >> value;
            result = value * 1000;
            cout << "Grams = " << result << endl;
            break;

        case 4:
            cout << "Enter temperature in Celsius: ";
            cin >> value;
            result = (value * 9/5) + 32;
            cout << "Fahrenheit = " << result << endl;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}