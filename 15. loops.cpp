#include <iostream>

int main(){
    // for loop
    for (int i =0; i < 10; i++){
        std::cout <<"i: "<< i << "\n";
    }

    // while loop
    int k = 0;
    while(k < 10){
        std::cout <<"k: "<< k << "\n";
        k++;
    }

    // do while
    int j = 0;
    do{
        std::cout <<"j: " <<j << "\n";
    }while (j < 0);
    return 0;
}