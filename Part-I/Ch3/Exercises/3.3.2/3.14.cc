#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    int temp;
    while (std::cin >> temp)
        vec.push_back(temp);

    return 0;
}