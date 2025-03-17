
#include<iostream>

// overloading the + operator

class Complex{
    private:
        int real, imag;
    public:
        Complex(int r = 0, int i = 0){
            real = r;
            imag = i;
        }

        Complex operator + (Complex const &obj){
            Complex res;
            res.real = this->real + obj.real;
            res.imag = this->imag + obj.imag;
            return res;
        }

        void print(){
            std::cout << real << " + i" << imag << std::endl;
        }
};

class Complex2{

    private:
        int real, imag;
    public:
        Complex2(int r = 0, int i = 0){
            real = r;
            imag = i;
        }

        friend Complex2 operator + (Complex2 const &obj1, Complex2 const &obj2);
        
        void print(){
            std::cout << real << " + i" << imag << std::endl;
        }

        // << operator can also be overloaded to print the object. this operator is called insertion operator.
        // friend function is used to overload the << operator.

        friend std::ostream & operator << (std::ostream &out, Complex2 const &obj);

};

Complex2 operator + (Complex2 const &obj1, Complex2 const &obj2){
    Complex2 res;
    res.real = obj1.real + obj2.real;
    res.imag = obj1.imag + obj2.imag;
    return res;
}

std::ostream & operator << (std::ostream &out, Complex2 const &obj){
    out << obj.real;
    out << "+i" << obj.imag;
    return out;
}

int main(){

    Complex c1(3, 7);
    Complex c2(5, 8);
    Complex c3 = c1 + c2; // in this example, the overloaded operator is in the complex class.
    // either c1 or c2 invokes the operator + function. Instead, a friend function can be used to overload the operator.
    c3.print();

    Complex2 c4(3, 7);
    Complex2 c5(5, 8);
    Complex2 c6 = c4 + c5; // in this example, the overloaded operator is a friend function.
    // the friend function is not a member of the class, but it has access to the private members of the class.
    c6.print();

    std::cout << c4 << std::endl; // this will print 3+i7
    std::cout << c5 << std::endl; // this will print 5+i8
    std::cout << c6 << std::endl; // this will print 8+i15

    return 0;
}