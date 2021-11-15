#include <vector>
#include <iostream>
#include <iterator>

int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::vector<int> vec (std::begin(a), std::end(a));
    for (auto v : vec)
        std::cout << v << std::endl;
    return 0;
}