#include <iostream>
#include <string>

int main() {
    std::string inputString;

    // Get input including spaces
    std::cout << "Enter a string (including spaces): ";
    std::getline(std::cin, inputString);

    // Display the entered string
    std::cout << "You entered: " << inputString << std::endl;

    return 0;
}

