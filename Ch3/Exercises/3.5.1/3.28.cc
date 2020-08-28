#include <iostream>
#include <string>

std::string sa[10];
int ia[10];
int main()
{
    std::string sa2[10];
    int ia2[10];

    for (auto s : sa)
        std::cout << s << " ";
    std::cout << std::endl;

    for (auto s : sa2)
        std::cout << s << " ";
    std::cout << std::endl;

    for (auto i : ia)
        std::cout << i << " ";
    std::cout << std::endl;    

    for (auto i : ia2)
        std::cout << i << " ";
    std::cout << std::endl;    

    return 0;
}