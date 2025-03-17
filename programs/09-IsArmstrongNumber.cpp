// This program checks if a number is an Armstrong number or not. 
// An Armstrong number is a number 
    // that is equal to the sum of its own digits raised to the power of the number of digits.
// For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.

#include <iostream>
#include <cmath>

int main(){
    int num, originalNum, remainder, n = 0, result = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;
    originalNum = num;
    while(originalNum != 0){
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while(originalNum != 0){
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if(result == num){
        std::cout << num << " is an Armstrong number." << std::endl;
    }else{
        std::cout << num << " is not an Armstrong number." << std::endl;
    }
    return 0;
}