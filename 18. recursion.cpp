#include <iostream>
// Recursion is a functions that calls itsekf
void printNumber(int i){
    if (i > 0){
        printNumber(i-1);
        std::cout << i << std::endl;
    }
}

int main(){
    printNumber(3);
    return 0;
}