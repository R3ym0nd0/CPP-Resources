// int

#include<iostream>
int main() {
    int number; // whole number declaration
    number = 5; // Assignment
    std::cout << number; // Printing the variable(number)
    return 0;
}

// double
#include<iostream>
int main() {
    double number; // decimal number declaration
    number = 5; // Assignment
    std::cout << number; // Printing the variable(number)
    return 0;
}

// char(Single Character Only)
#include<iostream>
int main() {
    char name; // character declaration
    name = "A"; // Assignment
    std::cout << name; // Printing the variable(number)
    return 0;
}

// boolean(True of False)
#include<iostream>
int main() {
    bool result; // boolean declaration
    result = true; // Assignment
    std::cout << result; // Printing the variable(result)
    return 0;
}

// string
#include<iostream>
int main() {
    std::string name; // string  declaration
    name = "Reymond"; // Assignment
    std::cout << name; // Printing the variable(name)
    return 0;
}

//adding text in printing
#include <iostream>
int main() {
    std::string name; // string  declaration
    name = "Reymond"; // Assignment
    int age = 19;
    std::cout << "Hello " << name << "\n"; // Printing the variable(name)
    std::cout << "You are " << age << "Years Old!";
    return 0;
}


//Summary
#include <iostream>
main() {

    int whole_number = 1;
    float decimal_number = 1.55f;
    double decimal_number = 1.5;
    char name = 'A';
    bool result = true;
    std::string words = "Hello!";
    std::cout << words;
    return 0;
}

