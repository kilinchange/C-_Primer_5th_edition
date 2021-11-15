#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1;
    int temp;
    while (std::cin >> temp)
        v1.push_back(temp);
    
    for (decltype(v1.size()) i = 0; i != v1.size() - 1; i++)
        std::cout << v1[i] + v1[i+1] << " ";
    std::cout << std::endl;

    for (std::vector<int>::size_type i = 0; i != v1.size(); i++)
        std::cout << v1[i] + v1[v1.size() - 1 - i] << " ";
    std::cout << std::endl;
    
    return 0;
}