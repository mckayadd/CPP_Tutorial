// This program calculates the sum of the first N natural numbers.

#include <iostream>

int main(){

    int n, sum;
    std::cout << "Enter a number: ";
    std::cin >> n;
    sum = n * (n + 1) / 2; // In this formula either n or n+1 is even, so the product is even, so the division is exact, no need to cast to float and define the sum as float
    std::cout << "The sum of the first " << n << " natural numbers is " << sum << std::endl;
    return 0;
}