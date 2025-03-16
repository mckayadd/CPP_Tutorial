// Polymorphism: Polymorphism is a feature of object-oriented programming languages that allows a single interface to be used to represent multiple different types. This allows objects of different types to be treated as objects of a common type. Polymorphism is a key feature of 
    // object-oriented programming languages such as C++.

#include<iostream>

class Car{
    public:
        virtual void start(){
            std::cout << "Car started" << std::endl; // as this is a virtual function, it will be overridden by the derived classes. So, just declaration of this function is enough.
        }

        virtual void stop(){
            std::cout << "Car stopped" << std::endl;
        }
};

class Innova : public Car{
    public:
        void start(){
            std::cout << "Innova started" << std::endl;
        }

        void stop(){
            std::cout << "Innova stopped" << std::endl;
        }
};

class Swift : public Car{
    public:
        void start(){
            std::cout << "Swift started" << std::endl;
        }

        void stop(){
            std::cout << "Swift stopped" << std::endl;
        }
};

int main()
{
    Car *p = new Innova();
    p->start();
    p->stop();

    p = new Swift();
    p->start();
    p->stop();

    return 0;
}
// Output:
// Innova started
// Innova stopped
// Swift started
// Swift stopped    

/*
Explanation: In this program, we have a base class Car with two virtual 
    functions start() and stop(). We have two derived classes Innova and Swift 
    that override these functions. 
    In the main function, we create pointers of type Car and assign them the derived
    class objects. When we call the start() and stop() functions using these pointers,
    the functions of the derived classes are called. This is an example of polymorphism
    in C++. The start() and stop() functions are polymorphic functions because they can
    be overridden by the derived classes. The functions are called based on the type of
    object pointed to by the pointer, not the type of the pointer itself. This allows us
    to treat objects of different types as objects of a common type. This is the essence
    of polymorphism in object-oriented programming.
Polymorphism in C++: Polymorphism is a key feature of object-oriented programming languages  
    such as C++. Polymorphism allows objects of different types to be treated as objects of a 
    common type. This allows a single interface to be used to represent multiple different types.
    In C++, polymorphism is achieved through virtual functions. A virtual function is a member 
    function of a class that is declared with the virtual keyword. When a virtual function is 
    overridden in a derived class, the function in the derived class is called instead of the 
    function in the base class. This allows objects of different types to be treated as objects 
    of a common type. Polymorphism is a powerful feature of C++ that allows for code reuse and 
    flexibility in object-oriented programming. 
*/