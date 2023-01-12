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
	// const int myNum = 15;
	// myNum = 10; --> Will result in an error, a constant (const) is immutable, it cannot be changed.
	// you should always declare the variable as a constant when you have values that are unlikely to change.

	// const int minutesPerHour = 60;
	// const float PI = 3.14;

	/* int x, y;
	int sum;
	cout << "Type a number: ";
	cin >> x;
	cout << "Type another number: ";
	cin >> y;
	sum = x + y;
	cout << "Sum is: " << sum;  */

	/*cout << "size of char: " << sizeof(char) << endl;
	cout << "size of int: " << sizeof(int) << endl;
	cout << "size of long: " << sizeof(long) << endl;
	cout << "size of float: " << sizeof(float) << endl;
	cout << "size of double: " << sizeof(double) << endl;
	*/
	// Scientific Numbers
	// "e" means to the power of 10.
	//float f1 = 35e3;
	//double d1 = 12E4;
	//cout << f1 << endl;
	//cout << d1 << endl;


	// booleans
	// return values for booleans are 0 (false) and 1 (true)
/*	bool isCodingFun = true;
	bool isFishTasty = false;

	cout << isCodingFun << endl;
	cout << isFishTasty << endl;

	char a = 65, b = 66, c = 67;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl; */

	// Logical Operators
	// You can test for true(1) or false(0) values with logical operators
	// && (logical and) returns true of both statements are true
	// || (logical or) returns true if one of the statements are true
	// ! (logical not) reverse the result, returns false of the result is true
	// int x = 5;
	// int y = 3;

	// cout << (x < 5 && x < 10) << endl;
	// cout << (x < 5 || x < 10) << endl;
	// cout << !(x < 5 && x < 10) << endl;

	// Strings
	// string firstName = "John ";
	// string lastName = "Doe ";
	// string fullName = firstName + lastName;
	// cout << fullName;

	// A string in C++ is actually an object, this means that it contains functions that you can use on a string.
	// string fullName = firstName.append(lastName);
	// cout << fullName;

	// string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	// cout << "The length of the txt string is: " << txt.length() << endl;
	// cout << "The length of the txt string using the size() function is: " << txt.size() << endl;

	/*string myString = "Hello";
	cout << myString[0] << endl;
	cout << myString[1] << endl;
	myString[0] = 'J'; // you can change individual characters on a string using bracket notation.
	cout << myString << endl;

	string fName;
	cout << "Type your full name: ";
	// cin >> fName >> endl;
	getline(cin, fName);
	cout << "Your full name is: " << fName << endl;  */
	// If you type your full name with a space, the output will be your first name and not your last. 
	// The reason for this is that cin considers a space (whitespace, tabs etc..) as a terminating character, which means that it can only display
	// single words.
	// lets fix this using the getline() function
	// getline() takes cin as the first parameter, and the string variable as the second, thus allowing you to read the full line of text.

	// Arrays
	// Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
	string cars[5] = { "Volvo", "BMW", "Ford", "Mazda", "Tesla"};
	for (int i = 0; i < 5; i++) {
		// cout << cars[i] << endl;
		cout << i << " = " << cars[i] << endl;
	}

	int myNum[5] = { 10, 20, 30, 40, 50 };
	
	/* for (int i = 0; i < 5; i++) {
		cout << myNum[i] << endl;
	} */
	// For each loop version
	for (int i : myNum) {
		cout << i << endl;
	}
	// cout << cars[0] << endl;
	// cars[0] = "Opel";
	// cout << cars[0] << endl;

	// in C++, you don't have to specify the size of an array, the compiler is smart enough to determine the size based on the number of values inside
	string cars2[] = { "Dodge", "Bugatti", "Toyta" };
	// having the number of elements in an array declared like the cars array above is considered good practice so you can avoid errors in your code.


	




}
