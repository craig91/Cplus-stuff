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
	/* for (int i = 0; i < 5; i++) {
		// cout << cars[i] << endl;
		cout << i << " = " << cars[i] << endl;
	} */

	int myNum[5] = { 10, 20, 30, 40, 50 };
	
	/* for (int i = 0; i < 5; i++) {
		cout << myNum[i] << endl;
	} */
	// For each loop version
	/*for (int i : myNum) {
		cout << i << endl;
	}*/
	// cout << cars[0] << endl;
	// cars[0] = "Opel";
	// cout << cars[0] << endl;

	// in C++, you don't have to specify the size of an array, the compiler is smart enough to determine the size based on the number of values inside
	string cars2[] = { "Dodge", "Bugatti", "Toyta" };

	// having the number of elements in an array declared like the cars array above is considered good practice so you can avoid errors in your code.
	// cout << sizeof(cars2) << endl;
	// The array contains 3 elements, but the output is 120, why?
	// The sizeof() function returns the size of a type in bytes

	int myNumbers[] = { 10,20,30,40,50 };
	
	 /* for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
		cout << "Elements using for loop: " << myNumbers[i] << endl;
	}; */

	/*for (int i : myNumbers) {
		cout << "Elements using for each loop: " << i << endl;
	}
	*/
	// cout << sizeof(myNumbers) << endl;
	int getArrayLength = sizeof(myNumbers) / sizeof(int); // To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains. You can also add this method inside of a loop declaration like above.

	// cout << "The length of the array is: " << getArrayLength << endl;

	// Multidimensional Arrays
	// A multidimensional array is an array of arrays.
	// Step 1. define the variable type Step 2. specify the name of the array followed by square brackets which specify how many elements the main array has, followed by another set of square brackets whcih indicates how many elements the sub-arrays have.

	// string letters[2][4];
	string letters[2][4] = {
		{"A", "B", "C", "D"},
		{"E", "F", "G", "H"}
	};

		// Each set of square brackets in an array declaration adds another dimension to an array. An array like the one above is said to have two dimensions. Arrays can have any number of dimensions. The more dimensions an array has, the more complex the code becomes.
	string letters2[2][2][2] = {
	{
		{"A", "B"},
		{"C", "D"}
	},
	{
		{"E", "F"},
		{"G", "H"}
	}
}; 

// Access the elements of a multidimensional array
// To access an element of a multidimensional array, specify an index number in each of the array's dimensions.

	string letters3[2][4] = {
		{"A", "B", "C", "D"},
		{"E", "F", "G", "H"}
	};

	/*cout << letters3[0][0] << endl;
	cout << letters3[0][1] << endl;
	cout << letters3[0][2] << endl;
	cout << letters3[0][3] << endl;
	cout << "*****************" << endl;
	cout << letters3[1][0] << endl;
	cout << letters3[1][1] << endl;
	cout << letters3[1][2] << endl;
	cout << letters3[1][3] << endl; */

	// looping through a multidimensional array (2 dimensional)
/*	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << letters3[i][j] << endl;
		}
	};*/

	string threeDimension[2][2][2] = {
		{
			{"A", "B"},
			{"C", "D"}
		},
		{
			{"E", "F"},
			{"G", "H"}
		}
	};

/*	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				cout << threeDimension[i][j][k] << endl;
			}
		}
	};
*/

// Struct
	// structs are a way to group several related variables into one place. Each var in the structure is known as a member of the structure.
	// unlike an array, a struct can contain many different data types


	// create structure
	struct {
		int number; // Member (int variable)
		string str; // Member (String variable
	} myStructure;


	// assign values to members of myStructure
	myStructure.number = 10;
	myStructure.str = "Hello";

	cout << myStructure.number << endl;
	cout << myStructure.str << endl;

	// one structure in multiple variables

	struct {
		int num1 = 12;
		string test = "This is a struct member";
	} myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas.

	struct {
		string brand;
		string model;
		int year;
	} myCar1, myCar2;

	// insert data into the first struct
	myCar1.brand = "BMW";
	myCar1.model = "X5";
	myCar1.year = 1999;

	myCar2.brand = "Ford";
	myCar2.model = "Mustang";
	myCar2.year = 1969;

	cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
	cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;

	// Named Structures
	// By giving a name to the structure, you can treat it as a data type. This means that you can create variables with this structure anywhere in the program at any time.
	
	struct myDataType {
		int digit;
		string words;
	};

	myDataType myVar;

	struct car2 {
		string brand;
		string model;
		int year;
	};

	car2 Car1;
	Car1.brand = "Mitsubishi";
	Car1.model = "Eclipse";
	Car1.year = 1996;

	car2 Car2;
	Car2.brand = "Toyota";
	Car2.model = "Supra";
	Car2.year = 1994;


	// References
	// A reference variable is a "reference" to an existing variable, and it is created with the & operator.

	string food = "Pizza";
	string& meal = food;

	cout << food << endl;
	cout << meal << endl;

	// Memory address
	// The & operator was used to create a reference variable. It can also be used to get the memory addres of a variable; which is the location of where the variable is stored on the computer. When a var is created in C++, a memory address is assigned to the variable. And when I assign a value to the variable, it is stored in the memory address. To access it, I have to use the & operator, the result will represent where the variable is stored in memory.

	cout << &food << endl;; // Outputs 000000A8C9F9F4E8 on my computer. This memory address will change everytime my program is run.
	
	const string desert = "cake";
	cout << &desert << endl; // Outputs 0000000D9CFDF768 on my computer. This memory address changes as well for some reason. I thought it would stay the same since its a constant. But it seems like only the value is immutable, but not the memory address.






	




}
