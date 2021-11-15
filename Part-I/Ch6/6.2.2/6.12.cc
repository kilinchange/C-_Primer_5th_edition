#include <iostream>

void swap(int& ra, int& rb)
{
    int temp = ra;
    ra = rb;
    rb = temp;
}

int main()
{
    int a = 1, b = 2;
    int &ra = a, &rb = b;
    swap(ra, rb);
    std::cout << a << '\n' << b << std::endl;


    return 0;
}