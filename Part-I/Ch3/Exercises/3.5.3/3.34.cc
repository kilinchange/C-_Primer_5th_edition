#include <iostream>

int main()
{
    int ia[] = {1,2,3,4,5};
    int *p2 = ia, *p1 = ia;
    std::cout << *p1 << std::endl;
    p1 += p2 - p1;
    std::cout << *p1 << std::endl;

    return 0;
}