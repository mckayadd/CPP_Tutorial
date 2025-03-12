
// Enum and Typedef are used to create new data types in C++.
// Enum is used to declare an enumeration, a distinct type consisting of a set of named constants called enumerators.
// Typedef is used to create an alias for a data type.

#include<iostream>

int main(){
    // Enum
    enum Color {RED, GREEN, BLUE}; // Enum declaration is similar to a class declaration. 
    // It is used to define a new data type. It is helpful to define a set of named constants.
    // Enum us defining constants under a single name. It makes the code more readable and manageable.
    Color c = RED; // Enum variable
    std::cout << "The value of c is " << c << std::endl; // The value of c is 0
    c = GREEN;
    std::cout << "The value of c is " << c << std::endl; // The value of c is 1
    c = BLUE;
    std::cout << "The value of c is " << c << std::endl; // The value of c is 2

    // Typedef is used to create an alias for a data type. It increases the readability of the code.
    typedef int marks; // Typedef declaration
    marks m1 = 50; // Typedef variable
    std::cout << "The value of m1 is " << m1 << std::endl; // The value of m1 is 50
    return 0;

}