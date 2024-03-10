#include <iostream>

int main(){
    // int mysteryNoise = 1;
    // if (mysteryNoise == 1){
    //     std::cout << "woof \n";
    // }else if (mysteryNoise == 2){
    //     std::cout << "meow \n";
    // }else{
    //     std::cout << "oink \n";
    // }

    int mysteryNoise = 2;
    switch(mysteryNoise){
        case 1:
            std::cout << "woof \n";
            break;
        case 2:
            std::cout << "meow \n";
            break;
        default:
            std::cout << "oink \n";
            break;
    }
    return 0;
}