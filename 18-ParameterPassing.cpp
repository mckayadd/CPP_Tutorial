
#include <iostream>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
  
    int x = 5, y = 10;
    swapByValue(x, y);
    std::cout << "After swapByValue: x = " << x << ", y = " << y << std::endl;

    x = 5, y = 10;
    swapByReference(x, y);
    std::cout << "After swapByReference: x = " << x << ", y = " << y << std::endl;

    x = 5, y = 10;
    swapByAddress(&x, &y);
    std::cout << "After swapByAddress: x = " << x << ", y = " << y << std::endl;

    return 0;
}