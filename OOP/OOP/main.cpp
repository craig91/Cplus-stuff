#include <iostream>
using namespace std;

class MyClass { // The Class
public: // Access specifier
	int myNum; // Attribute
	string myString; // Attribute
};

class Car {
public: 
	string brand;
	string model;
	int year;
//	int speed(int maxSpeed);
	Car(string x, string y, int z) { // constructor with parameters
		brand = x;
		model = y;
		year = z;
	}
};

// You can also add parameters to methods of a class.
/* int Car::speed(int maxSpeed) {
	return maxSpeed;
} */

// Methods are functions that belongs to a class
// There are 2 ways to define functions that belongs to a class: 1. Inside class definition 2. Outside class definition

// To define a function outside the class definiton, you have to declare it inside of the class and then define it outside of the class. This is done ny specifying the name of the class, followed by the scope resolution :: operator, followed by the name of the function.

class MyClass2 {
public:
	void myMethod() {
		cout << "Hello World!" << endl;
	}
	void outsideMethod();
};

void MyClass2::outsideMethod() {
	cout << "I am the outside Method!" << endl;
}

// Constructors
// A constructor in C++ is a special method that is automatically called when and object of a class is created.
class myConstruct { // The class
public:		// Access Specifier
	myConstruct() { // constructor
		cout << "I am a constructor";
	}
};


int main() {
	MyClass myObj; // create and object of myClass

	// Access attributes and set values.
	myObj.myNum = 15;
	myObj.myString = "Some text";

	cout << myObj.myNum << endl;
	cout << myObj.myString << endl;


	cout << "************************************" << endl;

	// create object of car

	/* Car carObj1;
	carObj1.brand = "BMW";
	carObj1.model = "X5";
	carObj1.year = 1995;

	Car carObj2;
	carObj2.brand = "Ford";
	carObj2.model = "Mustang";
	carObj2.year = 1969; */

	Car carObj3("Mitsubishi", "Eclipse", 1996);
	Car carObj4("Toyota", "Supra", 1994);


	cout << carObj3.brand << " " << carObj3.model << " " << carObj3.year <<  endl;
	cout << carObj4.brand << " " << carObj4.model << " " << carObj4.year << endl;
	// cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << " " << carObj2.speed(150) << endl;




	cout << "************************************" << endl;

	MyClass2 myObj2; // create an object of myClass2
	myObj2.myMethod(); // call the method
	myObj2.outsideMethod();

	cout << "************ Constructor ************************" << endl;
	myConstruct myObj3; // create object if myConstruct (this will call the constructor)
	// The constructor has the same name of the class, it is always public, and it does not have any return value.

}
