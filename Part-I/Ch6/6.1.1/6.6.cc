#include <iostream>

void print_count_calls(int num)
{
    static size_t ctr = 0;
    ctr++;
    std::cout << num;
    for (int i = 0; i < ctr; i++)
        std::cout << "*";
    std::cout << std::endl;
}

int main()
{
    for (int i = 0; i < 3; i++)
        print_count_calls(i);

    return 0;
}