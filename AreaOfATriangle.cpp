// This program calculates the area of a triangle given the base and height.

#include <iostream>

int main(){
    int base, height;
    float area;
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;
    area = 0.5 * base * height; // Clever to use 0.5 as it doesn't require a cast to float
    std::cout << "The area of the triangle with base " << base << " and height " << height << " is " << area << std::endl;
    return 0;
}