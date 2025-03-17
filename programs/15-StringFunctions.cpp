// This program explains the usage of string functions in C++.
// You need to include the <cstring> header file to use string functions.
// The following are some of the string functions in C++:
//
// strlen() - Returns the length of the string.
// strcpy() - Copies a string to another string.
// strncpy() - Copies a specific number of characters from a string to another string.
// strcat() - Concatenates two strings.
// strncat() - Concatenates a specific number of characters from a string to another string.
// strcmp() - Compares two strings.
// strstr() - Searches for a substring in a string.
// strchr() - Searches for a character in a string.
// strrchr() - Searches for the last occurrence of a character in a string.
// strrev() - Reverses a string.
// strupr() - Converts a string to uppercase.
// strlwr() - Converts a string to lowercase.
// strset() - Sets all characters in a string to a specific character.
// strnset() - Sets the first n characters in a string to a specific character.
// strpbrk() - Searches for any of a set of characters in a string.
// strspn() - Returns the length of the initial segment of a string that consists of only the characters in a specified string.
// strcspn() - Returns the length of the initial segment of a string that consists of only the characters not in a specified string.
// strtok() - Breaks a string into a series of tokens.
// strerror() - Returns a pointer to the textual representation of the current errno value.
// strtol() - Converts a string to a long integer.
// strtof() - Converts a string to a float.
// strtod() - Converts a string to a double.

#include <iostream>
#include <cstring>


int main(){
    
    char s1[20] = "Hello";
    char s2[20] = "World";
    
    // the usage of strcat():
    strcat(s1, s2);
    std::cout << s1 << std::endl; // This will print "HelloWorld"

    char s3[20] = "145";
    char s4[20] = "74.28";

    long int num1 = strtol(s3, NULL, 10); // This will convert the string "145" to the long integer 145
    // the meanings of the parameters are: s3 is the string to be converted, 
    //  NULL is the address of the pointer to the first character after the number, 
    //  10 is the base of the number system.
    float num2 = strtof(s4, NULL); // This will convert the string "74.28" to the float 74.28

    std::cout << num1 + 1 << std::endl;
    std::cout << num2 + 1 << std::endl;

    // strtok() example:
    char s5[70] = "Hello,World,How,Are,You";
    char *token = strtok(s5, ",");
    while(token != NULL){
        std::cout << token << std::endl;
        token = strtok(NULL, ","); // why NULL? Because strtok() keeps track of the string it is working on.
    }

    return 0;
}