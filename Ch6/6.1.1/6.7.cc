#include <iostream>

int count_call()
{
    static int ctr = -1;
    ctr++;
    return ctr;
}

int main()
{
    for (int i = 0; i < 3; i++)
        std::cout << count_call() << std::endl;

    return 0;
}