

#include <iostream>
#include "MathLibrary.h"

int main()
{
    double a = 2;
    int b = 2;

    std::cout << "a + b = " << MathLibrary::Arithmetic::Add(a, b) << std::endl;
    std::cout << "a - b = " << MathLibrary::Arithmetic::Substract(a, b) << std::endl;
    std::cout << "a / b = " << MathLibrary::Arithmetic::Divide(a, b) << std::endl;
    std::cout << "a * b = " << MathLibrary::Arithmetic::Multiply(a, b) << std::endl;

}

