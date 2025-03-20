

#include<iostream>
#include <cstdlib> // For std::atoi()
#include "helper.h"

int main(int argc, char* argv[]) {

    if(argc < 2){
        std::cerr << "❌ Error: Please provide a number." << std::endl;
        return 1;
    }

    int num = std::atoi(argv[1]);

    std::cout << isPrime(num) << std::endl;

    return 0; 
}