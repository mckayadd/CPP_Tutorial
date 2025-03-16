#include<iostream>

class MyException: std::exception
{

};

int division(int a, int b){
    if(b == 0)
        throw MyException();
    return a/b;
}

int main() {
    
    int a=10;
    int b=0;
    try {
        if (b == 0) {
            throw "Division by zero condition!";
        }
        else {
            std::cout << a / b << std::endl;
        }
    }
    catch (const char* msg) {
        std::cerr << msg << std::endl;
    }

    try{
        division(a, b);
    }
    catch(MyException e){
        std::cout << "Exception caught: Division by zero" << std::endl;
    }
    // catch(int e){
    //     std::cout << "Exception caught: Division by zero" << std::endl;
    // }
    // catch(...){
    //     std::cout << "Exception caught: Division by zero" << std::endl;
    // }
    // The last catch block will catch any exception that is not caught by the previous catch blocks.
    // If there are child and parent classes, the child class should be caught first.
    // If the parent class is caught first, the child class will not be caught.

    return 0;
}