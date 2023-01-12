#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	// Assign multiple variables to one line
	//int x = 5, y = 6, z = 50;
	//cout << x + y + z;

	// int a, b, c;
	// a = b = c = 50;
	// cout << a + b + c;

	// Constants
	const int myNum = 15;
	// myNum = 10; --> Will result in an error, a constant (const) is immutable, it cannot be changed.
	// you should always declare the variable as a constant when you have values that are unlikely to change.

	const int minutesPerHour = 60;
	const float PI = 3.14;

	int x, y;
	int sum;
	cout << "Type a number: ";
	cin >> x;
	cout << "Type another number: ";
	cin >> y;
	sum = x + y;
	cout << "Sum is: " << sum;

	cout << "size of char: " << sizeof(char) << endl;
	cout << "size of int: " << sizeof(int) << endl;
	cout << "size of long: " << sizeof(long) << endl;
	cout << "size of float: " << sizeof(float) << endl;
	cout << "size of double: " << sizeof(double) << endl;



}
