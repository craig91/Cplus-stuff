#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// The fstream library allows us to work with files
// There are 3 classes included in the fstream library, which are used to create, write or read files:
// ofstream --> creates and writes to files
// ifstream --> Reads from files
// fstream --> A combination of ofstream and ifstream: creates, reads, and writes to files.

int main() {

	string myText; // create a text string, which is used to output the text file
	ifstream MyReadFile("filename.text"); // read from the text file;
	while (getline(MyReadFile, myText)) { // use a while loop together with the getline() to read the file line by line
		cout << myText << endl; // Output text from the file
	}
	
	MyReadFile.close();

	/* ofstream MyFile("filename.text");
	MyFile << "Files can be tricky, but it is fun enough!" << endl;
	MyFile.close();*/
}