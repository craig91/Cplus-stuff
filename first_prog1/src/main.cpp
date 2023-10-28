#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	int favorite_num;
	
	cout << "Enter your favorite number between 1 and 100: ";
	
	cin >> favorite_num;
	
	cout << "That's my favorite number too!" << endl;
	cout << "No, really, " << favorite_num << " is my favorite number" << endl;

	return 0;
}

