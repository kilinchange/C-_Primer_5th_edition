#include <iostream>

void print(int value)
{
    std::cout << value << std::endl;
}

void print(const int *beg, const int *end)
{
    while (beg != end)
        std::cout << *beg++ << std::endl;
}

int main()
{
    int i = 0, j[2] = {0, 1};
    print(i);
    print(std::begin(j), std::end(j));
    return 0;

    return 0;
}