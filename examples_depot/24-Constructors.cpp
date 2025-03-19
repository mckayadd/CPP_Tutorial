
// Philosophically, creating an object with garbage data is not a good idea.
// It is a good practice to initialize the object with some default values.

// There are different tyoes of constructors:
// 1. Default constructor: This constructor is called when an object is created without any arguments.
// 2. Parameterized constructor: This constructor is called when an object is created with arguments.
// 3. Non-parameterized constructor: This constructor is called when an object is created without any arguments.
// 4. Copy constructor: This constructor is called when an object is created by copying another object.
// 5. Destructor: This constructor is called when an object is destroyed.

// difference betwwen default and non-parameterized constructor:
// A default constructor is any constructor that can be called with zero arguments (it may have default parameters).
// A non-parameterized constructor is a default constructor without any parameters at all.

// Let's see an example of each of the constructors above for the Rectangle class.

#include<iostream>

class Rectangle {
    private:
        int width, height;
    
    public:
        // Default Constructor
        Rectangle() {
            width = 0;
            height = 0;
            std::cout << "Object created" << std::endl;
        }
    
        // Parameterized Constructor
        Rectangle(int w, int h) {
            width = w;
            height = h;
        }
    
        // Copy constructor
        // I use this when I want to create a new object with the same data as another object.
        Rectangle(const Rectangle &r){ 
            width = r.width;
            height = r.height;
        }
        

        // Deep copy constructor: This is used when the object has pointers to memory allocated on the heap.
        // In this case, we need to allocate memory for the new object and copy the data from the old object to the new object.
        // This is called a deep copy.


        // Destructor
        ~Rectangle(){
            std::cout << "Object destroyed" << std::endl;
        }
        
    void setWidth(int w){
        width = w;
    }

    int getWidth(){
        return width;
    }

    void setHeight(int h){
        height = h;
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

int main(){

    // Default Constructor
    Rectangle r1;
    
    // Parameterized Constructor
    Rectangle r2(5, 10);
    
    // Copy Constructor
    Rectangle r3 = r2;  // This will invoke the copy constructor
    
    std::cout << "Rectangle r2 area: " << r2.area() << std::endl;
    std::cout << "Rectangle r3 area (copied from r2): " << r3.area() << std::endl;

}



