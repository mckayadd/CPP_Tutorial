// To be able to use variable number of arguments. 

#include<iostream>

using namespace std;

int sum(int n, ...){ // n is usual used to specify the number of elements passed to the function

    va_list list;
    va_start(list, n);

    int x;
    int s=0;

    for(int i=0; i < n; i++)
    {
        x = va_arg(list, int);
        s += x;
    }

    return s;
}

int main(){

    cout << sum(4, 1, 2, 3, 4) << endl;
    cout << sum(5, 10, 20, 30, 40, 50) << endl;

    return 0;
}