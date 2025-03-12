// This program checks if a number is a perfect number or not. A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself. 
// For example, 6 is a perfect number because its proper divisors are 1, 2, and 3, and 1 + 2 + 3 = 6.

#include <iostream>

int main(){
    int num, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num){
        std::cout << num << " is a perfect number." << std::endl;
    }else{
        std::cout << num << " is not a perfect number." << std::endl;
    }
    return 0;
}

