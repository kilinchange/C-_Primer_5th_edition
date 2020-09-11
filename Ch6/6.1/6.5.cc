#include <iostream>

int abs(int n)
{
    return n < 0 ? -n : n;
}

int main()
{
    std::cout << abs(-5) << std::endl;
    return 0;
}