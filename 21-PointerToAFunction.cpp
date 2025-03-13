
#include <iostream>

void display(){
    std::cout << "Hello World" << std::endl;
}

int max(int a, int b){
    return a > b ? a : b;
}

int min(int a, int b){
    return a < b ? a : b;
}



int main(){

    // A pointer to a function is a variable that stores the address of a function.
    // The syntax for declaring a pointer to a function is as follows:
    // return_type (*pointer_name)(parameter_type1, parameter_type2, ...);
    void (*fp)(); // decleration
    fp = display; // initialization
    fp(); // calling the function using the pointer
    (*fp)(); // calling the function using the pointer
    
    int (*fp2)(int, int);
    fp2 = max;
    std::cout << fp2(5, 10) << std::endl; // This will print 10
    fp2 = min;
    std::cout << fp2(5, 10) << std::endl; // This will print 5 
    // This is just like polymorphism in OOP, where the same function name can be used to call different functions based on the context.
    // This is useful when we want to call different functions based on some condition.
    // This is also useful when we want to pass a function as an argument to another function
    // This is also useful when we want to return a function from another function.
    
    
    return 0;
}