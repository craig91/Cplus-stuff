#include <iostream>
#include <cmath>

using namespace std;

void display_menu();
void convert_temp();
double to_celcius(double fahrenheit);
double to_fahrenheit(double celcius);

int main() {
    cout << "Convert Tempratures\n\n";

    display_menu();
    char again = 'y';
    while (again == 'y') {
        convert_temp();

        cout << "Convert another temperature? (y/n): ";
        cin >> again;
        cout << endl;
    }

    cout << "Bye!\n";
}

void display_menu() {
    cout << "MENU\n"
         << "1. Fahrenheit to Celcius\n"
         << "2. Celcius to Fahrenheit\n\n";
}

void convert_temp() {
    int option;
    cout << "Enter a menu option: ";
    cin >> option;

    double f = 0.0;
    double c = 0.0;
    switch (option)
    {
    case 1: 
        cout << "Enter degrees Fahrenheit:  ";
        cin >> f;

        c = to_celcius(f);
        c = round(c * 10) / 10;

        cout << "Degrees Celcius: " << c << endl;
        break;
    case 2:
        cout << "Enter degrees Celcius:  ";
        cin >> c;

        f = to_fahrenheit(c);
        f = round(f * 10) / 10;

        cout << "Degrees Fahrenheit: " << f << endl;
        break;
    default:
        cout << "You must enter a valid menu number.\n";
        break;
    }
}

double to_celcius(double fahrenheit) {
    double celcius = (fahrenheit - 32.0) * 5.0 / 9.0;
    return celcius;
}

double to_fahrenheit(double celcius) {
    double fahrenheit = celcius * 9.0 / 5.0 + 32.0;
    return fahrenheit;
}