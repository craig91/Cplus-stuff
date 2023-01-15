#include <iostream>
using namespace std;

void swapNums(int& x, int& y) {
	int z = x;
	// cout << z << endl;
	x = y;
	// cout << y << endl;
	y = z;
	// cout << z << endl;
}


int main() {
	int firstNum = 10;
	int secondNum = 20;

	cout << "Before swap: " << endl;
	cout << firstNum << secondNum << endl;

	// Call the function, which will change the values of the firstNum and secondNum
	swapNums(firstNum, secondNum);
	cout << "After swap: " << endl;
	cout << firstNum << secondNum << endl;

	return 0;
}