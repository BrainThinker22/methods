// NAME LENGTH CODE

#include <iostream>
#include <string>

int main() {

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 20) {
        std::cout << "I am sorry! The name is too long!";
    }

    else {
        std::cout << "The name is valid! Welcome " << name;
    }

    return 0;
}