#include <iostream>
using namespace std;


void myFunction() {
	cout << "I just got executed!" << endl;
}

void exFunction();

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

}

void exFunction() {
	int a = 5;
	int b = 6;
	cout << a + b << endl;
}