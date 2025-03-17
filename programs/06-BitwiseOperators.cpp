// Description: Demonstrates the bitwise operators in C++. 
// The bitwise operators are used to perform bit-level operations on integers.
// They are nost commonly used in low-level programming,
//   such as device drivers and embedded systems.

#include<iostream>

int main(){
    int x = 5, y = 1, z;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    z = x & y;
    std::cout << "x & y = " << z << std::endl; // This is the bitwise AND operator
    z = x | y;
    std::cout << "x | y = " << z << std::endl; // This is the bitwise OR operator
    z = x ^ y;
    std::cout << "x ^ y = " << z << std::endl; // This is the bitwise XOR operator
    z = ~x; // This is the bitwise NOT operator, which is equivalent to integer negation minus 1
    // The bitwise NOT operator inverts the bits of the operand, i.e., 0 becomes 1 and 1 becomes 0
    // Then, the result is interpreted as a two's complement binary number
    // The two's complement of a number is obtained by inverting the bits and adding 1
    // Why we get a negative number here? Because the most significant bit is 1, so the number is negative
    std::cout << "~x = " << z << std::endl;
    z = x << 1; // This is the left shift operator, which is equivalent to integer multiplication by 2
    std::cout << "x << 1 = " << z << std::endl;
    z = x >> 1; // This is the right shift operator, which is equivalent to integer division by 2
    std::cout << "x >> 1 = " << z << std::endl;
    return 0;
}