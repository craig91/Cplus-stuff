#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num = 7;
    double root = sqrt(num);
    root = round(root * 1000) / 1000;
    cout <<  "The square root of " << num << " is " << root << endl;
    return 0;
}