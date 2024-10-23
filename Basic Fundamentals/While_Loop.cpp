//1st Example
#include <iostream>

//cout << (insertion operator)
//cin >> (extractor operator)

int main() {

    //Declaring Variable
    std::string name;
    int age;
    
    while (true) {
        std::cout << "What's your Age: "; //Printing Question
        std::cin >> age; //Inputing age
        
        //Conditional Statement
        if ( age > 100 || age < 1 ) {
            std::cout << "Invalid Age!" << "\n";
        }

        else if ( age >= 18) {
            std::cout << "You are Adult!" << "\n";
            break;
        }
        else if ( age >= 14 && age <= 17 ) {
            std::cout << "You are Tennager!" << "\n";
            break;
        }   
        else {
            std::cout << "You are Child" << "\n";
            break;
        }
    }

    while (true) {
        std::cout << "What's your Full Name: "; //Printing Question
        std::getline(std::cin >> std::ws, name); //Inputing user name

        if ( name == "Reymond Joaquin" || name == "Reymond" || name == "Joaquin") {
            std::cout << "You're the best!" << "\n";
            std::cout << "Your name is " << name << "\n"; //Printing the result
            std::cout << age << " is your Age!"; //Printing the result
            break;
        }
        else {
            std::cout << "Something went wrong, please try again :(" << "\n";
        }
    }

    return 0;
}


//2nd Example
#include <iostream>

int main() {

    int number = 1;

    while (number == 1) {
        std::cout << "Im stuck"; //This will print "IM STUCK" forever unless you stop it!
    }
    return 0;
}

//3rd Example
#include <iostream>

int main() {

    while (true) {
        int number;
        std::cout << "Type Number: ";
        std::cin >> number;

        while (number == 1) {
        std::cout << "Im stuck"; //This will print "IM STUCK" forever unless you stop it!
        }
        
    }

    return 0;
}


