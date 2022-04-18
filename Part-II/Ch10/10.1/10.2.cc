#include <iostream>
#include <string>
#include <list>
#include <algorithm>

int main()
{
    std::list<std::string> lst{"1", "2", "1", "2", "1", "3"};
    std::cout << std::count(lst.begin(), lst.end(), "2") << std::endl;
    return 0;
}