#include <iostream>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        
        for (int k = 0; k < i; k++) 
            std::cout << " ";

        for (int j = 0; j < n - i; j++) {
            std::cout << "*";
            if (j < n - i - 1) std::cout << " "; // Prevent trailing space
        }

        std::cout << std::endl;
    }

    return 0;
}

