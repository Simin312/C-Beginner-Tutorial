#include <iostream>

int main(){
    float myFloat = 1.2;
    // method 1
    int myInt = (int)myFloat;

    // method 2
    int myInt2 = static_cast<int> (myFloat);

    // method 3
    int myInt3 = myFloat;

    std::cout << myInt << std::endl;
    std::cout << myInt2 << std::endl;
    std::cout << myInt3 << std::endl;

    return 0;
}