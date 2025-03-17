

#include <iostream>
#include <fstream>
#include<string>

int main(){

    std::ofstream outfile("myfile.txt"); // this creates the file if it does not exist

    outfile << "Hello" << std::endl;
    outfile << 38 << std::endl;

    outfile.close();

    std::ifstream infile;
    infile.open("myfile.txt");

    std::string str;
    int x;

    infile >> str; 
    infile >> x; 

    std::cout << str << " " << x << std::endl;

    if(infile.eof()) std::cout << "EOF!" << std::endl;

    infile.close();

    return 0;
}