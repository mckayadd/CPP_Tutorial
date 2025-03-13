

#include <iostream>

int * fun1(){
    int a = 10;
    return &a; // this is a bad practice
    // The memory of a will be deallocated after the function returns 
        // as it is a local variable allocated on the stack.
}

int * fun2(){
    int *p = new int(15);
    return p; // this is a good practice
    // The memory of a will not be deallocated after the function returns 
        // as it is a dynamically allocated variable on the heap.
}

int * fun3(){

    // allocate memory for 5 integers, give them values and return the pointer to the first element
    int *p = new int[5];
    for(int i = 0; i < 5; i++){
        p[i] = i + 1;
    }
    return p;
}

int & fun4(int &a){
    
    return a; // this is a good practice
    // this function returns a reference to the variable a
    // The memory of a will not be deallocated after the function returns 
        // as it is a local variable allocated on the stack.
    // The reference will point to the correct value of a.
}


int main(){

    int *p1 = fun1();
    std::cout << *p1 << std::endl; // This will print a garbage value
    // The value of a is deallocated after the function returns, so the pointer will point to a garbage value.
    // This is an example of returning a pointer to a local variable, which is a bad practice.
    // The memory of a will be deallocated after the function returns as it is a local variable allocated on the stack.

    int *p2 = fun2();
    std::cout << *p2 << std::endl; // This will print 10
    // The value of a is not deallocated after the function returns, so the pointer will point to the correct value.
    // This is an example of returning a pointer to a dynamically allocated variable, which is a good practice.
    // The memory of a will not be deallocated after the function returns as it is a dynamically allocated variable on the heap.

    int *p3 = fun3();
    for(int i = 0; i < 5; i++){
        std::cout << p3[i] << " "; // This will print 1 2 3 4 5
    }
    std::cout << std::endl;

    int a = 20;
    int &b = fun4(a);
    std::cout << b << std::endl; // This will print 20

    fun4(a) = 30; // this will change the value of a because the reference is returned
    // the function call is at the left side of the assignment operator
    // , but it is correct because the function returns a reference to the variable a.
    std::cout << a << std::endl; // This will print 30


    return 0;

}