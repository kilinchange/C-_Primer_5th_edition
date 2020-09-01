#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    for (auto &v : vec)
        v = (v % 2 == 0) ? v : 2 * v;
    for (auto v : vec)
        std::cout << v << std::endl;

    return 0;
}