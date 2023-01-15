#include <iostream>
using namespace std;


void myFunction() {
	cout << "I just got executed!" << endl;
}

void exFunction();

void nameFunction(string fname) {
	cout << fname << " Dejean" << endl;
};

void countryFunction(string country = "Norway") {
	cout << country << endl;
}

void multiParam(string name, int age) {
	cout << name << " Dejean " << age << " Years old." << endl;
}

int returnValue(int x) {
	return 5 + x;
}

int sumParam(int x, int y) {
	return x + y;
}

void arrayFunc(int myNumbers[5]) {
	for (int i = 0; i < 5; i++) {
		cout << myNumbers[i] << endl;
	}
}


int main() {

	// Functions
	// myFunction() is the name of the function
	// void means that the function does not have a return value.
	// Inside the function (the body), add code that defines what the function should do.

	// Delcared functions are not executed immediately. they are saved for later use, and will be executed later when they are called.


	myFunction();
	exFunction();

	// The function can be declared as many times as you want.

	// If a user defined function is declared after the main() function , an error will occur, what you can do is make the declartion above the main() function and define the function under it for code clarity as demonstrated with my exFunction().

	// One parameter
	// nameFunction("Craig");
	// nameFunction("Stephane");

	// Default Parameters
	// countryFunction();
	// countryFunction("USA");
	// countryFunction("Zimbabwe");

	// Multiple Parameters
	// multiParam("Craig", 31);
	// multiParam("Minami", 35);

	// Functions with return values.
	// cout << returnValue(10) << endl;
	// cout << returnValue(1234) << endl;

	// Function that returns with 2 params
	cout << sumParam(17, 78) << endl;
	cout << sumParam(123, 2074986) << endl;
	// You can store the result of the function in a variable as well.
	int z = sumParam(132, 45);
	cout << z << endl;


	// Pass Arrays as function parameters
	int myNumbers[5] = { 10,20,30,40,50 };
	arrayFunc(myNumbers);

}

void exFunction() {
	int a = 5;
	int b = 6;
	cout << a + b << endl;
};
