#include <iostream>

// & Address of operator
// * Dereference of operator

//Example 1:
int main() {

    std::string name = "Reymond";
    std::string *pointer_name = &name;
    std::cout << pointer_name;
    return 0;
}

//Example 2:

int main () {

    int age = 19;
    int *pointer_age = &age;
    std::cout << *pointer_age;
    return 0;
}

//Example 3:

int main() {

    std::string freepizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    std::string *pointer_freepizzas = freepizzas;
    std::cout << *pointer_freepizzas;
    return 0;
}

//Example 4:

int main () {

    int age = 19;
    int *pointer_age = &age;
    
    std::cout << "Value: " << *pointer_age << "\n";
    std::cout << "Memory Address: " << pointer_age;

    return 0;
}