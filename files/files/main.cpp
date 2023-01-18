#include <iostream>
#include <fstream>

using namespace std;

// The fstream library allows us to work with files
// There are 3 classes included in the fstream library, which are used to create, write or read files:
// ofstream --> creates and writes to files
// ifstream --> Reads from files
// fstream --> A combination of ofstream and ifstream: creates, reads, and writes to files.

int main() {
	ofstream MyFile("filename.text");
	MyFile << "Files can be tricky, but it is fun enough!" << endl;
	MyFile.close();
}