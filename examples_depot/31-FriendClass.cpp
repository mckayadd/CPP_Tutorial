

# include <iostream>

class Class2; // Forward declaration of Class2

class Class1
{
    private:
        int a = 5;
    public:
        Class1()
        {
            
        }
        friend class Class2;
};

class Class2{
    public: 
    Class1 c1;


    void display(){
        std::cout << "Value of a is: " << c1.a << std::endl;
    }

};

int main()
{
    Class2 c2;
    c2.display();
    return 0;
}   