// EMPTY METHOD TEST

#include <iostream>
#include <string>

int main() {

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.empty()) {
        std::cout << "I am sorry! You don't have a name!";
    }

    else {
        std::cout << "The name is valid! Welcome " << name;
    }

    return 0;
}