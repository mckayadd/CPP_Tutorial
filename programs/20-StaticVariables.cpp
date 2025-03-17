

#include <iostream>

int v = 0; // This is a global variable. However, it is only accessed by the fun function.
// The only advantage of using a global variable here is that its value is preserved between function calls.
// To preserve the value of a local variable between function calls, we can use a static variable.

// To show that I am declaring the variable y as static (in fun2). 



void fun(){
  int a = 5; 
  v++; 
  std::cout << a << " " << v << std::endl;
}

void fun2(){
    static int y = 0; // This is a static variable. It is only initialized once and its value is preserved between function calls.
    // They are like globalvariables, but their scope is limited to a function.
    int a = 5; 
    y++; 
    std::cout << a << " " << y << std::endl;
  }

int main(){
  fun(); // This will print 5 1
  fun(); // This will print 5 2
  fun(); // This will print 5 3

  fun2(); // This will print 5 1
  fun2(); // This will print 5 2
  fun2(); // This will print 5 3

  return 0;
}