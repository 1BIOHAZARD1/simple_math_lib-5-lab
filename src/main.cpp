#include <iostream>
#include "math_lib.h"
#include "triangle.h"




int main(int argc, char* argv[])
{
    double num1 = 10.5, num2 = 2.5;

    std::cout << "Addition: " << add(num1, num2) << std::endl;
    std::cout << "Subtraction: " << subtract(num1, num2) << std::endl;
    std::cout << "Multiplication: " << multiply(num1, num2) << std::endl;
    std::cout << "Division: " << divide(num1, num2) << std::endl;
    std::cout << "GCD: " << GCD(num1, num2) << std::endl;
    std::cout << "Square root: " << sqrt(num1) << std::endl;

    switch((int)leastCommonMultiple(4,6))
    {
        case 1:
            std::cout << "The least common multiple is 1" << std::endl;
        case 2:
            std::cout << "The least common multiple is 2" << std::endl;
    }
    return 0;
}
