#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    // lambda function
    // Lambda functions in C++ are a way to define anonymous functions, which are functions that do not 
    // have a name and can be defined in-place where they are needed. 
    auto average = [](float num1, float num2) -> float {return(num1+num2)/2;};
    float myAvg = average(1,2);

    float myAvg2 = [](float num1, float num2) -> float {return(num1+num2)/2;}(1,2);
    
    float x = 1;
    float y = 2;

    auto average2 = [x,y]() -> float {return(x+y)/2;};
    float myAvg3 = average2();

    float myAvg4 = [x,y]() -> float {return(x+y)/2;}();

    std::vector<int> unorderedNum {3, 2, 5, 1};
    std::sort(unorderedNum.begin(),unorderedNum.end(),[](int num1, int num2){return num1 > num2;});

    for (int i : unorderedNum)
        std::cout << i << "\n";

    return 0;
}