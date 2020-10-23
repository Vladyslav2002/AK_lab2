#include <iostream>
#include "calculator.h"

int main()
{
    Calculator calculator;

    double a = 15.0;
    double b = 8.0;

    std::cout << "a - b = " << calculator.Sub(a, b) << std::endl;

    return 0;
}

