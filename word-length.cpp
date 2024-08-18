// WORD LENGTH CODE

#include <iostream>
#include <string>

int main() {

    std::string word;
    std::cout << "Please enter a valid word: ";
    std::getline(std::cin, word);

    if (word.length() > 20) {
        std::cout << "The word is too long! I can't comprehend it!";
    }

    else {
        std::cout << "The word is within the range! It is understandable!";
    }

    return 0;
}