
#include <iostream>

// Function overloading is having multiple functions with the same name but different parameters.
// The compiler will choose the correct function to call based on the number of parameters and the data types of the parameters.
// The following is an example of function overloading:
//
// int max(int a, int b){
//     if(a > b){
//         return a;
//     }else{
//         return b;
//     }
// }

// float max(float a, float b){
//     if(a > b){
//         return a;
//     }else{
//         return b;
//     }
// }

// The function bodies are the same, but the data types of the parameters are different.
// Therefore, a template function can be used to avoid writing multiple functions with the same body.

template <class T>
T max(T a, T b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

template <class P , class Q>
P max2(P a, Q b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

// Default arguments can be used in functions to provide default values for parameters.
// This way, we can avoid funtion overloading for different number of parameters.
int max3 (int a = 0, int b = 0, int c = 0){
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
} 


// this example shows how to use a template function to avoid writing multiple functions with the same body.
// The template function can be used with any data type.

int main(){
    int a = 5, b = 10;
    float c = 5.5, d = 20.5;
    char e = 'A', f = 'B';

    std::cout << max(a, b) << std::endl; // This will print 10
    std::cout << max(c, d) << std::endl; // This will print 10.5
    std::cout << max(e, f) << std::endl; // This will print B

    // In the function parameters, the data types are not specified.
    // The compiler will automatically determine the data types based on the arguments passed to the function.
    // However, the data types must be the same for the function to work correctly.
    // a function call like max(a, c) will not work because the data types are different.

    std::cout << max2(a, d) << " (different data types)" << std::endl; 
    // The return type is chosen based on the first parameter, so the return type is int.
    // This will print 20

    std::cout << max3(5, 10, 15) << std::endl; // This will print 15
    std::cout << max3(5, 10) << std::endl; // This will print 10
    std::cout << max3(5) << std::endl; // This will print 5
    std::cout << max3() << std::endl; // This will print 0, this is because the default values are 0 (the value of C in this case).

    return 0;
}