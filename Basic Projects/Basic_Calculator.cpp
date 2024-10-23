#include <iostream>

//Function Prototypes
int addition(int first_number, int second_number);
int subtraction (int first_number, int second_number);
int multiplication(int first_number, int second_number);
int division (int first_number, int second_number);
void repeat();
void calculator();


int addition(int first_number, int second_number) {
    return first_number + second_number;
}

int subtraction (int first_number, int second_number) {
    return first_number - second_number;
}

int multiplication(int first_number, int second_number) {
    return first_number * second_number;
}

int division (int first_number, int second_number) {
    
    if (second_number == 0) {
        std::cout << "Error: Division by zero is not allowed.\n";
        return 0; // or handle as you prefer
    }

    return first_number / second_number;
}

void repeat() {

    std::string user;

    while (true) {
        std::cout << "Do you want to continue (Y/N): ";
        std::cin >> user;
        if ( user == "y") {
            calculator(); //This will return into Calculator function
        }
        else if ( user == "n" ) {
            std::cout << "Thanks For using this program :)";
            break;
        }
        else {
            std::cout << "Invalid Choice, please try again.";
        }
    }
}

void calculator() {
    while (true) {

        int first_number;
        char op;
        int second_number;

        //First Number
        std::cout << "--> Type First Number: ";
        std::cin >> first_number;

        //Operator
        std::cout << "--> Pick a Arithmetic Operation (+, -, *, /): ";
        std::cin >> op;

        //Second Number
        std::cout << "--> Type Second Number: ";
        std::cin >> second_number;

        //Compute
        if ( op == '+' ) {
                std::cout << "The result is: " << addition(first_number, second_number) << "\n";
                break;
        }
        else if ( op == '-' ) {
                std::cout << "The result is: " << subtraction(first_number, second_number) << "\n";
                break;
        }
        else if ( op == '*' ) {
                 std::cout << "The result is: " << multiplication(first_number, second_number) << "\n";
                 break;
        }
        else if ( op == '/' ) {
                 std::cout << "The result is: " << division(first_number, second_number) << "\n";
                 break;
        }
        else {
            std::cout << "Invalid Operator, please try again.";
        }
    }

    repeat(); //Asking if he wants to continue or not
}

int main() {
    calculator();
    return 0;
}