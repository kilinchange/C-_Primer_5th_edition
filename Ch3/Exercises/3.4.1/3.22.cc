#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main()
{
    std::vector<std::string> v;
    std::string temp;

    while (std::getline(std::cin, temp))
        v.push_back(temp);

    for (auto it = v.begin();
        it != v.end() && !it->empty(); it++)
    {
        for (auto &c : *it)
            c = toupper(c);
        std::cout << *it << std::endl;
    }

    return 0;
}