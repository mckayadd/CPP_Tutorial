// Pointer decleration, initialization and dereferencing
#include <iostream>

int main(){

    int x = 10; // Declaring an integer variable

    int *p; // Declaring a pointer variable

    p = &x; // Initializing the pointer variable with the address of x

    std::cout << "The value of x is " << x << std::endl; // The value of x is 10

    std::cout << "The address of x is " << &x << std::endl; // The address of x is 0x7fffbf7b3bdc

    std::cout << "The value of p is " << p << std::endl; // The value of p is 0x7fffbf7b3bdc


    std::cout << "The value of *p is " << *p << std::endl; // The value of *p is 10 // deferencing the pointer

    return 0;

}