#include <iostream>

// Function Prototypes
void choices();
float peso_to_dollar_converter();


float peso_to_dollar_converter() {
    float peso;
    const float dollar = 0.017;
    
    std::cout << "Please type a peso ammount: ";

    if (std::cin >> peso) {
        float result = peso * dollar;
        return result;
    }

    else {
        std::cin.clear();  // Clear error flag
        std::cin.ignore(1000, '\n');  // Ignore invalid input
        std::cout << "Invalid input. Please enter a number.\n";
        return 0.0;  // Indicate invalid conversion
    }
}

void choices() {

    char ch; // choice variable for menu
    while (true) {

        std::cout << "Choices:\n";
        std::cout << "[1] Peso to Dollar Converter\n";
        std::cout << "[2] Quiz Game\n";

        std::cout << "--> Please pick in a choices: ";
        std::cin >> ch; 

        switch (ch) {
            case '1': {
                float result = peso_to_dollar_converter();

                if (result != 0.0) {
                    std::cout << "Converted amount in dollars: " << result << "$\n";
                }
                break;
            }

            case '2':
                std::cout << "Quiz Game is under construction";

            default:
                std::cout << "Invalid Choice, please try again\n";
        }
    }
}


int main() {

    std::string correct_password = "admin123";
    std::string correct_email = "admin";
    std::string email;
    std::string password;

    while (true) {
        std::cout << "Type your Email: ";
        std::cin >> email;
        std::cout << "Type Password: ";
        std::cin >> password;


        if (password == correct_password && email == correct_email) {
            std::cout << "Login Successfully\n";
            choices();
        }
        else {
            std::cout << "Login Unsuccessful, please try again\n";
        }
    }

    return 0;
}