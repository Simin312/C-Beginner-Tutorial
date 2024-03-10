#include <iostream>

float average(float num1, float num2){
    return (num1+num2)/2;
}

// function overloading <- functions with same name but diff params
float average(float num1, float num2, float num3){
    return (num1+num2+num3)/3;
}

void printResult(float result){
    std::cout << result << "\n";
}

int main(){
    float myAverage = average(1,2,3);
    printResult(myAverage);
    return 0;
}