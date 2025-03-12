// This program demonstrates the use of arrays in C++ and how to access elements of an array.


#include <iostream>

int main(){

    int A[] = {1, 2, 3, 4, 5}; // Array declaration and initialization
    // The array A has 5 elements, indexed from 0 to 4
    // The elements are stored in contiguous memory locations
    // The name of the array A represents the address of the first element
    // The elements of the array can be accessed using the index operator []
    // The index starts from 0
    // The elements of the array can be accessed using the index operator []
    // The index starts from 0
    std::cout << "The elements of the array A are: ";
    // Let's print the elements of the array A using a for each loop
    for(int x : A){
        std::cout << x << " ";
    }
    std::cout << std::endl;

    // Now, let's create an array with mixed data types
    // The elements of the array can be of different data types

    int B[] = {'a', 2.5f, 3.6, 8, true}; // Array declaration and initialization

    // How do I access to the elements of the array B using a for each loop?

    // Let's print the elements of the array B using a for each loop
    std::cout << "The elements of the array B are: ";
    for(auto x : B){ // The auto keyword is used to automatically deduce the data type of the variable
        // In this loop, auto refers to the data type of the elements of the array B. 
        // It is deduced as int.
        std::cout << x << " ";
    }
    std::cout << std::endl;

}
