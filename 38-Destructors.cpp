
// Destructors are used for releasing/deallocating resources, such as heap memory, file, network connection... 

// For base and derived classes, the order of destructor calls are the opposite of constructor cals: 
// When a derived class object created: base constructor, derived constructor
// When program ends: derived destructor, base destructor
// If the object is created by a base class pointer then be careful: 
// there should be "virtual" keyword before the base class destructor to make the derived class destructor to be called first. 
// otherwise, as the pointer belongs to base class, its destructor is called

#include<iostream>

class Base{
    public:
    Base(){
        std::cout << "Base constructor" << std::endl;
    }
    virtual ~Base(){
        std::cout << "Base destructor" << std::endl;
    }
};

class Derived: public Base {
    public:
    Derived(){
        std::cout << "Derived constructor" << std::endl;
    }
    ~Derived(){
        std::cout << "Derived destructor" << std::endl;
    }

};



class Test{
    
    int *p;
public:

    Test(){
        std::cout << "Constructor is called" << std::endl;
        p = new int[10];
    }

    ~Test(){
        std::cout << "Destructor is called" << std::endl;
        delete []p;
    }

};

void fun(){
    Test t;

}

int main(){

    fun();

    Test *p = new Test();
    delete p;

   // std::cout << "---------" << std::endl;

    // Derived d; 
    // output:
    /*
    Base constructor
    Derived constructor
    Derived destructor
    Base destructor
    */

    std::cout << "---------" << std::endl;

    Base *q = new Derived();
    delete q; // if there is no virtual keyword before the base destructor, derived derstructor is not called. 
    return 0;
}