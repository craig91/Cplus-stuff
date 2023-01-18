#include <iostream>
using namespace std;

class Employee {
private:
	int salary;

public:
	void setSalary(int s) {
		salary = s;
	}
	int getSalary() {
		return salary;
	}
};

int main() {
	Employee myObj;
	myObj.setSalary(50000);
	cout << myObj.getSalary();
	return 0;
}

// Encapsulation means to hide "sensitive" data from users. To do this, you must declare class variables/attributes as private. If you want others to read or modify the value of a private member, you can provide public get and set methods.
// Why encapsulation? 1. it is considered good practice to declare your class attributes as private (as often as you can). Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts. 2. Increased security of data.

