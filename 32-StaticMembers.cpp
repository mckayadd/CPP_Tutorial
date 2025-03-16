#include<iostream>

class Test {
private:
    int x;
    int y;
public:
    static int count; // static int count = 0; is an Error: ISO C++ forbids in-class initialization of non-const static member 'count'
    Test() {
        count++;
    }
    static int getCount() {
        // x = 10; // Error: a nonstatic member reference must be relative to a specific object.
        // y++;    //        a static member function cannot access a non-static member variable.
        // this->x = 10; // Error: 'this' is unavailable in a static member function.
        return count;
    }
};

int Test::count = 0; // Static member variable must be defined outside the class.


int main(){


    Test t1;
    Test t2;
    Test t3;

    std::cout << Test::getCount() << std::endl;
    std::cout << Test::count << std::endl; // Accessing static member variable directly using class name.
    std::cout << t1.getCount() << std::endl;
    std::cout << t1.count << std::endl;

    return 0;
}