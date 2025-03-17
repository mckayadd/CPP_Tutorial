// Preprocessor directives or macros
// Macros are a way to define constants or functions that are used in the code. They are defined using the #define directive.

#include <iostream>

#ifndef PI
    #define PI 3.14159
#endif

#define MAX(a,b) (a>b?a:b)
#define c std::cout
#define nl std::endl
#define SQR(x) (x*x)
#define MSG(x) #x // this is used to convert the value of x to a string. 
                  // It will add double quotes to the value of x.
    
int main(){
    c<<PI<<nl;
    c<<MAX(10,20)<<nl;
    c<<SQR(5)<<nl;
    c<<MSG(Hello)<<nl;
    return 0;
}