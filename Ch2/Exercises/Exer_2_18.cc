#include <iostream>

int main()
{
    int x = 8, y = 10;
    int *p = &x;
    std::cout << p << " " << *p << std::endl;
    p = &y;
    *p = 9;
    std::cout << p << " " << *p << " " << y << std::endl;

    return 0;
}