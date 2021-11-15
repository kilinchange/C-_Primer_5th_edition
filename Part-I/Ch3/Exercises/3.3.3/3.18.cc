#include <vector>
#include <iostream>

int main()
{
    std::vector<int> ivec;
    ivec.push_back(42);
    for (auto i : ivec)
        std::cout << i << std::endl;

    return 0;
}