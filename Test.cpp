// Miscellenous examples
#include <iostream>
class Base {
    private:
        int x;
    protected:
        int y;
    public:
        int z;
    
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    int getZ() {
        return z;
    }
        Base() {
        this->x = 0;
        this->y = 0;    
        this->z = 0;
        std::cout << "Base Constructor" << std::endl;
    }
    Base(int x) {
        std::cout << "Base Constructor with x = " << x << std::endl;
    }
};



int main() {
    Base b;
    std::cout << b.getX() << std::endl;
    std::cout << b.getY() << std::endl;
    std::cout << b.z << std::endl;
    return 0;
}
