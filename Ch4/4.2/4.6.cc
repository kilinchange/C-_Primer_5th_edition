#include <iostream>

int main()
{
    int x;
    while(std::cin >> x)
    {
        if (x % 2 == 0) std::cout << "even!" << std::endl;
        else std::cout << "odd!" << std::endl;
    }

    return 0;
}