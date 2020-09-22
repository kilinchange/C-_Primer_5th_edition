#include <iostream>
#include <string>
#include <cassert>

int main()
{
    std::string s;
    while (std::cin >> s && s != "j") { }
    assert(std::cin);

    return 0;
}