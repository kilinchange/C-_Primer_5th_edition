#include <iostream>

int fact(int n)
{
    return n == 1 ? 1 : n * fact(n-1);
}

int main()
{
    int n;
    std::cin >> n;   
    std::cout << fact(n) << std::endl;
    return 0;
}