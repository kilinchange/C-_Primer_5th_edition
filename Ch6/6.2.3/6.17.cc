#include <iostream>
#include <string>
#include <cctype>

bool has_upper(const std::string& s)
{
    for (auto &c : s)
        if (isupper(c))
            return true;
    return false;
}

void to_lowercase(std::string& s)
{
    for (auto &c : s)
        c = tolower(c);
}

int main()
{   
    std::string s = "feAdfeF";
    std::cout << has_upper(s) << std::endl;
    to_lowercase(s);
    std::cout << s << std::endl;

    return 0;
}