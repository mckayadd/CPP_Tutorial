// This program calculates the roots of a quadratic equation given the coefficients.

#include <iostream>
#include <cmath>

int main(){
    float a, b, c, root1=0, root2=0;
    std::cout << "Enter the coefficients of the quadratic equation (a, b, and c in \"ax^2 + bx + c\"): ";
    std::cin >> a >> b >> c;
    root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    std::cout << "The roots of the quadratic equation " << a << "x^2 + " << b << "x + " << c << " = 0 are " << root1 << " and " << root2 << std::endl;
    return 0;
}