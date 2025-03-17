#include<iostream>

class Rectangle{
    private:
        int width, height;
    
    public:
        
    void setWidth(int w){
        width = w;
    }

    int getWidth(){
        return width;
    }

    void setHeight(int h){
        height = h;
    }

    int getHeight(){
        return height;
    }

    int area(){
            return width * height;
        }

    int perimeter(){
            return 2 * (width + height);
        }   
};


int main(){
    Rectangle r1;

   // as the data is private you can't data in this way: r1.width = 5;
   // you have to use the public methods to set the data
    r1.setWidth(5);
    r1.setHeight(10);   

    std::cout << "Width: " << r1.getWidth() << std::endl;
    std::cout << "Height: " << r1.getHeight() << std::endl;
    std::cout << "Area: " << r1.area() << std::endl;
    std::cout << "Perimeter: " << r1.perimeter() << std::endl;
   
    return 0;
}