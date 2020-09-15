#include <iostream>

void swap(int* pa, int* pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main()
{
    int a = 1, b = 2;
    swap(&a, &b);
    std::cout << a << '\n' << b << std::endl;


    return 0;
}