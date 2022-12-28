#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream testFile("test.txt");
    testFile << "Items in the test file";
    
    testFile.close();
}