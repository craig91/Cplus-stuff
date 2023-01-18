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

// *************************************

// Multilevel inheritance
class MyClass {
public: 
	void myFunction() {
		cout << "Some content in parent class" << endl;
	}
};

class MyChild: public MyClass{};
class MyGrandChild: public MyChild{};

// ***************************************

// Multiple Inheritance

class testClass {
public:
	void myFunction() {
		cout << "Test content in parent class" << endl;
	}
};
	
class MyOtherClass {
public:
	void myOtherFunction() {
		cout << "Some content in another class" << endl;
	}
};

class myChildClass : public testClass, public MyOtherClass {};


// **************************************
// Protected Access modifier

class Employee {
protected:
	int salary;
};

class Programmer : public Employee {
public:
	int bonus;
	void setSalary(int s) {
		salary = s;
	}
	int getSalary() {
		return salary;
	}
};


int main() {
	Car myCar;
	myCar.honk();
	cout << myCar.brand + " " + myCar.model << endl;


	MyGrandChild myObj;
	myObj.myFunction();



	myChildClass myObject;
	myObject.myFunction();
	myObject.myOtherFunction();

	Programmer object;
	object.setSalary(50000);
	object.bonus = 15000;
	cout << "Salary: " << object.getSalary() << endl;
	cout << "Bonus: " << object.bonus << endl;

	return 0;
}