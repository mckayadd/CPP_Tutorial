
#include<iostream>
#include<string>

int main(){
    std::string s1 = "Hello";
    std::string s2 = "World";       
    std::string s3 = s1 + s2;
    std::cout << s3 << std::endl; // This will print "HelloWorld"

    std::string s4;
    getline(std::cin, s4); // This will read a line from the console and store it in s4. 
    // only cin would read only the first word, getline reads the whole line.
    std::cout << s4 << std::endl;


    // Functions of the string class:
    // s.length() - Returns the length of the string.
    // s.size() - Returns the length of the string. same as length()
    // s.empty() - Returns true if the string is empty.
    // s.capacity() - Returns the size of the storage space currently allocated for the string, expressed in terms of bytes.
    // s.resize() - Resizes the string to a specific length.
    // s.shrink_to_fit() - Reduces the capacity of the string to fit its size.
    // s.clear() - Deletes all characters in the string.
    // s.at() - Returns the character at a specific position in the string.
    // s.front() - Returns the first character in the string.
    // s.back() - Returns the last character in the string.
    // s.max_size() - Returns the maximum number of characters that the string can hold.
    // s.append() - Appends a string to another string.
    // s.insert() - Inserts a string into another string.
    // s.replace() - Replaces a part of a string with another string.
    // s.find() - Finds a substring in a string.
    // s.rfind() - Finds the last occurrence of a substring in a string.
    // s.copy() - Copies a string to another string.
    // s.compare() - Compares two strings.
    // s.substr() - Returns a substring of the string.
    // s.erase() - Deletes a part of the string.
    // s.find_first_of() - Finds the first occurrence of any of the characters in a string.
    // s.find_last_of() - Finds the last occurrence of any of the characters in a string.

    // string::iterator: This is a pointer that points to a character in a string.
    // string::reverse_iterator: This is a pointer that points to a character in a string, but it moves in the reverse direction.

    std::string s5 = "Iterator";
    // the usage of the iterator:
    for(std::string::iterator it = s5.begin(); it != s5.end(); it++){
        std::cout << *it << std::endl;
    }

    return 0;
}   
