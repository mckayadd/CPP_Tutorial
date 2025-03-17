
// Namespaces are used to organize the program into logical units. 


#include<iostream>

namespace First{
    void display(){
        std::cout<< "First!" << std::endl;
    }
}

namespace Second{
    void display(){
        std::cout<< "Second!" << std::endl;
    }
}

using namespace First;

int main(){
    
    display();
    Second::display();

}