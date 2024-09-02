#include <iostream>
using namespace std;

int main()
{
    int choice;
    double temp, convertedTemp;

    cout << "=================================================\n";
    cout << "============= Temperature Converter =============\n";
    cout << "=================================================\n";

    cout << "\n=================================================\n";
    cout << "== Choose the scale you want to convert from: ===\n";
    cout << "== 1. Celsius                                 ===\n";
    cout << "== 2. Fahrenheit                              ===\n";
    cout << "== 3. Kelvin                                  ===\n";
    cout << "=================================================\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << "Enter the temperature value: ";
    cin >> temp;

    switch (choice)
    {
    case 1:
        convertedTemp = (temp * 9 / 5) + 32; // Celsius to Fahrenheit
        cout << temp << " Celsius is " << convertedTemp << " Fahrenheit." << endl;
        convertedTemp = temp + 273.15; // Celsius to Kelvin
        cout << temp << " Celsius is " << convertedTemp << " Kelvin." << endl;
        break;
    case 2:
        convertedTemp = (temp - 32) * 5 / 9; // Fahrenheit to Celsius
        cout << temp << " Fahrenheit is " << convertedTemp << " Celsius." << endl;
        convertedTemp = (temp - 32) * 5 / 9 + 273.15; // Fahrenheit to Kelvin
        cout << temp << " Fahrenheit is " << convertedTemp << " Kelvin." << endl;
        break;
    case 3:
        convertedTemp = temp - 273.15; // Kelvin to Celsius
        cout << temp << " Kelvin is " << convertedTemp << " Celsius." << endl;
        convertedTemp = (temp - 273.15) * 9 / 5 + 32; // Kelvin to Fahrenheit
        cout << temp << " Kelvin is " << convertedTemp << " Fahrenheit." << endl;
        break;
    default:
        cout << "Invalid choice!\n";
    }
    return 0;
}