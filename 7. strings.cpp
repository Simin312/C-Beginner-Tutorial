#include <iostream>
#include <string>

int main(){
    std::string myFirstName = "Kelvin";
    int length = myFirstName.length();
    char letter = myFirstName[0];

    std::string myLastName = " wood";
    std:: string myFullName = myFirstName + myLastName;

    std::string substr = myFullName.substr(0,6);

    unsigned int myIndex = myFullName.find("wood");
    unsigned int myIndex2 = myFullName.find("Kelvin");

    std::string myNumberString = "3";
    int myNumberInt = stoi(myNumberString);
    return 0;
}