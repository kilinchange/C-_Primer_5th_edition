#include <iostream>

int main()
{
    int v1, v2;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> v1 >> v2;
    int sum = 0;
    int min = (v1 < v2) ? v1 : v2;
    int max = (v1 > v2) ? v1 : v2;
    while (min <= max)
    {
        sum += min;
        min++;
    }
    std::cout << sum << std::endl;
    return 0;
}