#include <iostream> 
#include <cmath>


int main() {
    int num = 7;
    double root = std::sqrt(num);
    root = std::round(root * 1000) / 1000;
    std::cout <<  "The square root of " << num << " is " << root << std::endl;
    return 0;
}