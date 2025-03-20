

#include "helper.h"

bool isPrimeHelper(int num, int divisor){

    if (divisor == 1) return true;

    if (num % divisor == 0) return false; 
    else  return isPrimeHelper(num, divisor -1);
}

bool isPrime(const int &num){

    return isPrimeHelper(num, num/2);

}

