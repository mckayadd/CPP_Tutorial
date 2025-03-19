#include<iostream>

class Demo{
    public:
    int x;
    int y;
    Demo(int a, int b){
        x = a;
        y = b;
    }
    void display() const { // I don't want to change the value of x and y in the display function.
        // To make the display function constant, we can use the const keyword.
        // This will not allow us to change the value of x and y in the display function.
        
        // x++; // This will give an error. We cannot change the value of a constant variable.

        std::cout<<x<<" "<<y<<std::endl;
    }
};

int add(const int &a, const int &b){
    // call by reference is used to avoid the copy of the variable.
    // in this way, unnecessary memory is not allocated.
    // however, at the same time, we don't want to change the values of the variables in this function. 
    // therefore, we can use the const keyword to make the variables constant.
    // a++; // This will give an error. We cannot change the value of a constant variable.
    // b++; // This will give an error. We cannot change the value of a constant variable.
    return a+b;
}


int main(){

    const int x = 10;
    // x = 20; // This will give an error. We cannot change the value of a constant variable.
    std::cout<<x<<std::endl;

    int a = 5; 
    int const *p = &a;
    // *p = 20; // This will give an error. We cannot change the value of a constant variable.
    std::cout<<*p<<std::endl;

    int y = 20;
    p = &y;
    y++;
    std::cout<<*p<<std::endl;

    int z = 30;
    int *const q = &z;
    // q = &y; // This will give an error. We cannot change the address of a constant pointer.
    // pointer is locked to the address of z.
    std::cout<<*q<<std::endl;

    int m = 40;
    int n = 50;




    return 0;
    
}