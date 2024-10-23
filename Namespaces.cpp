#include<iostream>

// first namespace
namespace first{
    int number = 1;
}

// second namespace
namespace second{
    int number = 2;
}



int main() {
    using namespace first; // Calling the namespace first to access variable inside of it.

    std::cout << number << "\n"; // Printing the namespace first (Don't use this if it's too many variable of function inside of namespace because it can have issues as your program grows)

    std::cout << second:: number << "\n"; // Printing the namespace second (Recommended for Beginners because it specifically use only what you want to call varaibles)
    
    return 0;
}