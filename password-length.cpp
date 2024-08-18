        // PASSWORD LENGTH CODE

#include <iostream>
#include <string>

int main()

{

    std::string password;

    std::cout << "Enter your password: ";
    std::getline(std::cin, password);

    if (password.length() > 25) {
        std::cout << "Your password is too long!";
    }

    else {
        std::cout << "Welcome! You are logged in!";
    }


    return 0;
}