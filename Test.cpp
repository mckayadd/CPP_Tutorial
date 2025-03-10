// Miscellenous examples

#include<iostream>

int main(){
    char x = 128; // The range of char is -128 to 127. So, the value 128 is out of range. 
    // This is an example of overflow. The value of x will be -128.
    // The overflow occurs because the value 128 is represented as 10000000 in binary
    // The most significant bit is 1, so the number is negative.
    // The two's complement of 10000000 is 10000000, which is -128.
    // The two's complement is calculated by inverting the bits and adding 1.
    std::cout << (int)x << std::endl;
    x++;
    std::cout << (int)x << std::endl;
    return 0;

}