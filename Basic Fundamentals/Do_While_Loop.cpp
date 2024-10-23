#include <iostream>

int main() {
    int number;

    do {
        std::cout << "Type Number: ";
        std::cin >> number;

        if (number == 1) {
            std::cout << "I'm stuck\n"; // Will print if the number is 1
        }

    } while (number != 1); // The loop continues as long as number is not 1

    return 0;
}
