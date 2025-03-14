#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base Constructor" << std::endl;
    }
    Base(int x) {
        std::cout << "Base Constructor with x = " << x << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived Constructor" << std::endl;
    }
    Derived(int y) {
        std::cout << "Derived Constructor with y = " << y << std::endl;
    }
    Derived(int x, int y) : Base(x) {
        std::cout << "Derived Constructor with x = " << x << " and y = " << y << std::endl;
    }
};

int main() {
    Derived d1; // This will call the default constructor of the Base class and the default constructor of the Derived class.
    // This happens because the default constructor of the Base class is called by default when the Derived class is created.
    Derived d2(5);
    Derived d3(5, 10);

    // When an object of a derived class is created, the base class's constructor is 
        // always called first before the derived class's constructor executes. 
        // This ensures that the base class part of the object is properly 
        // initialized before any derived-specific initialization occurs.

    // If none of the base class constructors is called explicitly in the derived class constructor
        // initialization list, the default constructor of the base class is called implicitly.
    
    // If a base class constructor with parameters is called explicitly in the derived class constructor
        // initialization list, the default constructor of the base class is not called implicitly.
        // The base class constructor with parameters is called instead.
        return 0;
}