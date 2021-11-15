#include <iostream>
#include <cstddef>
#include <vector>

int main()
{
    int ia[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int ia2[10];
    for (size_t idx = 0; idx < 10; idx++)
        ia2[idx] = ia[idx];
    for (auto i : ia2)
        std::cout << i << " ";
    std::cout << std::endl;

    std::vector<int> vec { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<int> vec2 {vec};
    for (auto v : vec2)
        std::cout << v << " ";
    std::cout << std::endl;

    return 0;
}