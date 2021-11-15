#include <iostream>
#include <vector>
#include <cstddef>

int main()
{
    std::vector<int> vec {1, 2 ,3};
    int a[3];
    for (size_t i = 0; i < 3; i++)  
        a[i] = vec[i];
    for (auto i : a)
        std::cout << i << std::endl;

    return 0;
}