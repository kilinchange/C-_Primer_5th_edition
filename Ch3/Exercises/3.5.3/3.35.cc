#include <iostream>

int main()
{
    int ia[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int *p = ia;
    for (int i = 0; i < 10; i++)
        *(p + i) = 0;
    for (int i = 0; i < 10; i++)
        std::cout << ia[i] << std::endl;

    return 0;
}