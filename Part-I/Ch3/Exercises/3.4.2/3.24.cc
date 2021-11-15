#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1;
    int temp;
    while (std::cin >> temp)
        v1.push_back(temp);
    
    for (auto it = v1.cbegin();
        it != v1.cend() - 1; it++)
        std::cout << *it + *(it+1) << " ";
    std::cout << std::endl;

    for (auto it1 = v1.cbegin(), it2 = v1.cend() - 1;
        it1 != v1.cend(); it1++, it2--)
        std::cout << *it1 + *it2 << " ";
    std::cout << std::endl;
    
    return 0;
}