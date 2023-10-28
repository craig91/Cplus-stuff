#include <iostream>
using namespace std;

int main() {
    cout << "Gallon Converter" << endl << endl;

    double gallons;
    cout << "Enter Gallons: ";
    cin >> gallons;

    double liters = gallons * 3.7854;
    
    cout << "Liters:        " << liters << endl << endl
         << "Bye!" << endl << endl;
    return 0;

}