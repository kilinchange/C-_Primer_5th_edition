#include <iostream>

void reset(int &i)
{
    i = 0;
}

int main()
{
    int i = 4;
    int &r = i;
    reset(r);
    std::cout << i << std::endl;

    return 0;
}