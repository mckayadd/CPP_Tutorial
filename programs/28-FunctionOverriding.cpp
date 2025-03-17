

#include<iostream>

class Base{

    public:
        void display(){ // adding 'virtual' keyword here will change the output of the program.
            std::cout << "Display of Base" << std::endl;
        }

};

class Derived : public Base{

    public:
        void display(){
            std::cout << "Display of Derived" << std::endl;
        }

};



int main()
{
    Derived d;
    d.display();
    d.Base::display();

    Base *p = new Derived();
    p->display(); // This will call the display function of Derived class 
    // because it is a virtual function.
    // If not virtual, it will call the display function of Base class.
    // To force it to call the display function of Base class, we can use:
    p->Base::display();

    return 0;
}