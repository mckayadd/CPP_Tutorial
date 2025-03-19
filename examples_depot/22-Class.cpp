#include<iostream>

class Rectangle{
    public:
        int width, height;

        int area()
        {
            return width * height;
        }

        int perimeter()
        {
            return 2 * (width + height);
        }   
};


int main(){
    Rectangle r1;

    r1.width = 5;
    r1.height = 10;

    std::cout << "Area: " << r1.area() << std::endl;
    std::cout << "Perimeter: " << r1.perimeter() << std::endl;

    Rectangle *p1; // pointer to a Rectangle object
    p1 = &r1; // p1 points to r1

    p1->width = 10; // Accessing members of a class using a pointer
    p1->height = 20; // You can use the -> operator to access members of a class using a pointer

    std::cout << "Area: " << p1->area() << std::endl;
    std::cout << "Perimeter: " << p1->perimeter() << std::endl;

    return 0;
}