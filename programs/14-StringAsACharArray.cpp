
#include<iostream>

int main(){

    char name[10] = "Riza"; // This is a character array, not a string
    // The characters are stored in the following way:
    // R i z a \0 \0 \0 \0 \0
    // The last 5 characters are null characters, which are used to terminate the string.
    // The null character is put automatically at the end of the string.
    
    std::cout << name << std::endl; // This will print "Riza"
    
    // The null character is a character with the ASCII value of 0.

    char name2[10] = {65, 66, 67, 68, 69, 0, 70, 71}; // This is a character array, not a string
    // The characters are stored in the following way:
    // A B C D E \0 F G \0 \0
    // When try to print this, it will print "ABCDE", because the null character is used to terminate the string.
    
    char *name3 = "Riza"; // This is a string, not a character array
    // The characters are stored in the following way:
    // R i z a \0
    return 0;
}