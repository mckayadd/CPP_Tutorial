

#include<iostream>

template<class T>
class Stack{

    private:
    T *stk;
    int top;
    int size;
    public:
    Stack(int sz){
        size = sz;
        top = -1;
        stk = new T[size];
    }   
    void push(T x);
    T pop();
};

template<class T>
void Stack<T>::push(T x){
    if(top == size-1){
        std::cout<<"Stack is full";
    }
    else{
        top++;
        stk[top] = x;
        std::cout<<x<<" is pushed"<<std::endl;     
    }
}

template<class T>
T Stack<T>::pop(){
    T x = 0;
    if(top == -1){
        std::cout<<"Stack is empty";
    }
    else{
        x = stk[top];
        std::cout<<x<<" is popped"<<std::endl;
        top--;
    }
    return x;
}


int main(){
    Stack<int> s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();

    Stack<float> s2(10);
    s2.push(1.5);
    s2.push(2.5);
    s2.push(3.5);
    s2.pop();

    return 0;
}