#include <iostream>
#include <string>

inline bool isShorter(const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    std::string s1 = "geg", s2 = "fe";
    std::cout << isShorter(s1, s2) << std::endl;
    return 0;
}