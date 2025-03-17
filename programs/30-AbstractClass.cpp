/* This program will exemplify the concept of abstract classes in C++.
An abstract class is a class that has at least one pure virtual function. 
A pure virtual function is a function that has no implementation in the base class 
and is declared with the syntax virtual void functionName() = 0;.
An abstract class cannot be instantiated, i.e., we cannot create objects of an abstract class.
We can create pointers and references of an abstract class type, but we cannot create objects of an abstract class.
A derived class that inherits from an abstract class must implement all the pure virtual functions of the base class.
If the derived class does not implement all the pure virtual functions of the base class, it will also become an abstract class.
In this program, we have an abstract class Base with a pure virtual function display().
We have a derived class Derived that implements the display() function.
The display() function of the Derived class overrides the display() function of the Base class.
We can create pointers and references of the Base class, but we cannot create objects of the Base class.
We can create objects of the Derived class and call the display() function.
The display() function of the Derived class will be called.
*/



#include<iostream>


class Base  // Abstract class
{
    public:
        virtual void display() = 0; // Pure virtual function
};

class Derived : public Base
{
    public:
        void display()
        {
            std::cout << "Display of Derived" << std::endl;
        }
};

int main()
{
    // Base b; // This will give an error as we cannot create objects of an abstract class.
    Derived d;
    d.display();

    Base *p = new Derived();
    p->display();

    return 0;
}
// Output:  
// Display of Derived
// Display of Derived
// Explanation: In this program, we have an abstract class Base with a pure virtual function display().
// We have a derived class Derived that implements the display() function.
// We cannot create objects of the Base class as it is an abstract class.
// We can create pointers and references of the Base class.
// We can create objects of the Derived class and call the display() function.
// The display() function of the Derived class will be called.