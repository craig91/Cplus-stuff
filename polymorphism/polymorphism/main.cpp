#include <iostream>
using namespace std;

// Polymorphism
// Base class

class Animal {
public:
	void animalSound() {
		cout << "The animal makes a sound" << endl;
	}
};


class Pig : public Animal {
public:
	void animalSound() {
		cout << "The pig says: wee wee " << endl;
	}
};

class Cat : public Animal {
public:
	void animalSound() {
		cout << "The cat says: nyan nyan " << endl;
	}
};

int main() {
	Animal myAnimal;
	Pig myPig;
	Cat myCat;

	myAnimal.animalSound();
	myPig.animalSound();
	myCat.animalSound();

	return 0;
}