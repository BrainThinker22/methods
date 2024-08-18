// ERASE METHOD CODE

#include <iostream>
#include <string>

int main() {

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.erase(0, 3);

    std::cout << name;

    return 0;
}
