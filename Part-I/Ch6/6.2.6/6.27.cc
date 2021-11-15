#include <iostream>
#include <initializer_list>

int sum(std::initializer_list<int> value_list)
{
    int res = 0;
    for (auto &value : value_list)
        res += value;
    return res;
}

int main()
{
    std::cout << sum( {1,2,3} ) << std::endl;

    return 0;
}