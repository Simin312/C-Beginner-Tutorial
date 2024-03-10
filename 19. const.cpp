#include <iostream>

void funcWithConstArg(const int fixedValue){
    //fixedValue++;
    std::cout << fixedValue << "\n";
}


int main(){
    const int leaveMeAlone = 0; // const make the varaible changable
    //leaveMeAlone++;

    /*
    You can pass a non const num, just the num in the function
    is non changable.
    */
    int num = 7;
    funcWithConstArg(num); 

    return 0;
}