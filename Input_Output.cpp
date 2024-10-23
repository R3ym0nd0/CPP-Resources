#include <iostream>

//cout << (insertion operator)
//cin >> (extractor operator)

int main() {
    //Declaring Variable
    std::string name;
    int age;

    std::cout << "What's your Age: "; //Printing Question
    std::cin >> age; //Inputing age

    std::cout << "What's your Full Name: "; //Printing Question
    std::getline(std::cin >> std::ws, name); //Inputing user name
    
    std::cout << "Your name is " << name << "\n"; //Printing the result
    std::cout << age << " is your Age!"; //Printing the result
    return 0;
}