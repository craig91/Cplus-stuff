#include <iostream>
using namespace std;


void myFunction() {
	cout << "I just got executed!" << endl;
}
int main() {

	// Functions
	// myFunction() is the name of the function
	// void means that the function does not have a return value.
	// Inside the function (the body), add code that defines what the function should do.

	// Delcared functions are not executed immediately. they are saved for later use, and will be executed later when they are called.


	myFunction();
	myFunction();
	myFunction();

	// The function can be declared as many times as you want.

}