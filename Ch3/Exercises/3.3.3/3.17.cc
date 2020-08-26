#include <iostream>
#include <string>
#include <vector>
#include <cctype>

int main()
{
    std::string temp;
    std::vector<std::string> v;
    while(std::cin >> temp)
        v.push_back(temp);
    for (auto &s : v)
    {
        for (auto &c : s)
            c = std::toupper(c);
        std::cout << s << std::endl;
    }

    return 0;
}