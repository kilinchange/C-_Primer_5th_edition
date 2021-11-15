#include <iostream>

void f()
{
    std::cout << "f()" << std::endl;
}

void f(int)
{
    std::cout << "f(int)" << std::endl;
}

void f(int, int)
{
    std::cout << "f(int, int)" << std::endl;
}

void f(double, double = 3.14)
{
    std::cout << "f(double, double = 3.14)" << std::endl;
}

int main()
{
    f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);

    return 0;
}