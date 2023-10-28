#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::pow;
using std::round;
using std::endl;

int main() {
    cout << "Circle Calculator" << endl;

    double radius;
    cout << "Enter Radius:  ";
    cin >> radius;

    double pi = 3.14159;
    double diameter = 2 * radius;
    double circumference = diameter * pi;
    double area = pi * pow(radius, 2.0);

    circumference = round(circumference * 10) / 10;
    area = round(area * 10) / 10;

    cout << "Diameter:               " << diameter << endl
         << "Circumference:          " << circumference << endl
         << "Area:                   " << area << endl
         << "Peace out!" << endl;

    return 0;
}