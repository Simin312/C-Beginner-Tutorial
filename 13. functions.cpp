#include <iostream>

int main(){

    /*
    compare:
    > >= < <= == != 
    
    combine:
    && ||
    */
   if (true){
    std::cout << "true\n";
   }
   int myAge = 30;
   if (myAge >0 && myAge < 21){
    std::cout << "you're too young to drink. \n";
   }else if(myAge >=21 && myAge <35){
    std::cout << "start planning for retirement. \n";
   }else{
    std::cout <<"it's ok, you're still young.\n";
   }

   int broAge = 20;
   int sisAge = 25;
   int olderAge = 0;

   if (broAge > sisAge){
    olderAge = broAge;
   }else{
    olderAge = sisAge;
   }

    // ternary operator
    olderAge = 0;
    olderAge = (broAge > sisAge)? broAge : sisAge;

    return 0;
}