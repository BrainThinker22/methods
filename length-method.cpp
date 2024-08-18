// LENGTH METHOD CODE

#include <iostream>
#include <string>

int main() {

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << name.length();

    return 0;
}