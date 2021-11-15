#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1(10, 42);
    std::vector<int> v2;
    for (int i = 0; i < 10; i++)
        v2.push_back(42);
    std::vector<int> v3 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

    for (auto i : v1)
        std::cout << i << " ";
    std::cout << std::endl;

    for (auto i : v2)
        std::cout << i << " ";
    std::cout << std::endl;

    for (auto i : v3)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}