#include <iostream>

//cout << (insertion operator)
//cin >> (extractor operator)

int main() {

    //Declaring Variable
    std::string name;
    int age;

    std::cout << "What's your Age: "; //Printing Question
    std::cin >> age; //Inputing age
    
    //Conditional Statement
    if ( age > 100 || age < 1 ) {
        std::cout << "Invalid Age!" << "\n";
    }

    else if ( age >= 18 ) {
        std::cout << "You are Adult!" << "\n";    
    }

    else if ( age >= 14 && age <= 17 ) {
        std::cout << "You are Tennager!" << "\n"; 
    }   
    else {
        std::cout << "You are Child" << "\n";
    }

    std::cout << "What's your Full Name: "; //Printing Question
    std::getline(std::cin >> std::ws, name); //Inputing user name
    
    std::cout << "Your name is " << name << "\n"; //Printing the result
    std::cout << age << " is your Age!"; //Printing the result
    return 0;
}