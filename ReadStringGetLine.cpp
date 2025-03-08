// This program shows how to read a string from the user and print it.

#include <iostream>

int main(){
    std::string name, fullName;
    std::cout << "Enter your name: ";
    std::cin >> name; // This reads only the first word
    std::cout << "Hello, " << name << std::endl;

    std::cout << "Enter your full name: ";
    std::cin.ignore(); // This is to ignore the newline character left by the previous cin
    std::getline(std::cin, fullName); // This reads the entire line
    std::cout << "Hello, " << fullName << std::endl;
    return 0;
}