#include<iostream>

// This program demonstrates inheritance in C++.
// Inheritance is a mechanism in which a new class inherits properties and methods from an existing class.
// The existing class is called the base class, and the new class is called the derived class.
// In this example, the Rectangle class is the base class, and the Cuboid class is the derived class.
// The Cuboid class inherits the width and height properties from the Rectangle class.
// The Cuboid class adds a new property, length, and a new method, volume.
// The Cuboid class can access the width and height properties and the area and perimeter methods from the Rectangle class.
// The Rectangle class is defined with protected access specifiers for the width and height properties.
// This allows the derived class to access these properties directly.

class Rectangle{
    protected:
        int width, height;
    public:
        Rectangle(int w = 0, int h = 0){
            width = w;
            height = h;
        }

        void setWidth(int w){
            width = w;
        }

        void setHeight(int h){
            height = h;
        }

        int getWidth(){
            return width;
        }

        int getHeight(){
            return height;
        }

        int area(){
            return width * height;
        }

        int perimeter(){
            return 2 * (width + height);
        }
};

class Cuboid : public Rectangle{
    private:
        int length;
    public:
        Cuboid(int l = 0, int w = 0, int h = 0) : Rectangle(w, h){
            length = l;
        }

        void setLength(int l){
            length = l;
        }

        int getLength(){
            return length;
        }

        int volume(){
            return width * height * length;
        }
};

int main(){
    Rectangle r(5, 10);
    Cuboid c(5, 10, 15);

    std::cout << "Rectangle Area: " << r.area() << std::endl;
    std::cout << "Rectangle Perimeter: " << r.perimeter() << std::endl;

    std::cout << "Cuboid Volume: " << c.volume() << std::endl;
    std::cout << "Cuboid Area: " << c.area() << std::endl;
    return 0;
}
