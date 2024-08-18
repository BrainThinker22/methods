// APPEND METHOD TEST

#include <iostream>
#include <string>

int main() {

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.append(".com");
    std::cout << name;

    return 0;
}