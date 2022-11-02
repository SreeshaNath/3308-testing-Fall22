#include "MathOperations.h"

MathOperations::MathOperations(){}

int MathOperations::add(int a, int b){
    return a+b;
}

int MathOperations::subtract(int a, int b){
    return a-b;
}

int MathOperations::multiply(int a, int b){
    return a*b;
}

int MathOperations::divide(int a, int b){
    return (b==0)? 0: a/b;
}

int MathOperations::factorial(int a){
    if(a <= 1)
        return 1;
    else
        return a * factorial(a-1);
}

bool MathOperations::isEven(int a){
    return (a%2 == 0)? true:false;
}