    /*
    
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
        
        */
    
    

/*

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

*/

/*

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

*/

/*

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

*/

        // CLEAR METHOD TEST

    /* 
    
    #include <iostream>
    #include <string>

    int main() {

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.clear();
        std::cout << "Welcome " << name;

    return 0;
}

*/

    
/*

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

*/

/*

        // AT METHOD CODE

    #include <iostream>
    #include <string>

    int main() {

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << name.at(6);

    return 0;
}

*/

/*

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

*/
.
/*


        // INSERT METHOD CODE

    int main() {

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.insert(0, "%");

    std::cout << name;

    return 0;
}

*/

/*

        // FIND METHOD CODE

    int main() {

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << name.find('P');

    return 0;
}

*/

/*

        // ERASE METHOD CODE

    int main() {

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.erase(0, 3);

    std::cout << name;

    return 0;
}

*/

