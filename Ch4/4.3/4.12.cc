#include <iostream>

int main()
{
    int i, j, k;
    while (std::cin >> i >> j >> k && i!=j>k)
        std::cout << "Bingo!" << std::endl;
        
    return 0;
}