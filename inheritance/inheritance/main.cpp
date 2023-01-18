#include <iostream>
using namespace std;

// In C++, it is possible to inherit attributes and methods from one class to another.
// derived class (child) --> the class that inherits from another class
// base class (parent) --> the class being inherited from

// To inherit from a class, use the : symbol

// Why and when? --> it is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.

// base class
class Vehicle {
public:
	string brand = "Ford";
	void honk() {
		cout << "Tuut, tuuut!\n";
	}
};

// derived class
class Car : public Vehicle {
public:
	string model = "Mustang";
};

int main() {
	Car myCar;
	myCar.honk();
	cout << myCar.brand + " " + myCar.model;
	return 0;
}