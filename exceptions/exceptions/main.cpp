#include <iostream>

using namespace std;

// C++ exceptions
/* exeption handling consists of three keywords : try, throwand catch :
The try statement allows you to define a block of code to be tested for erros while it is being executed
The throw keyword throws an exception when a problem is detected, which lets us create a custom error
The catch statement allows you to define a block of code to be executed, if an error occurs in the try block
*/

int main() {

	try {
		int age = 25;
		if (age >= 18) {
			cout << "Access granted - you are old enough." << endl;
		}
		else {
			throw (age);
			// throw 505;
		}
	}
	catch (int myNum) {
		cout << "Access denied - You must be at least 18 years old" << endl;
		cout << "Age is: " << myNum << endl;
		// cout << "Error Number: " << endl;
	}
}

