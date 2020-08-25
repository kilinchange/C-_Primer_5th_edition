#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s("hello, I love you! And you?");
    std::string res;
    for (auto &c : s)
    {
        if (!ispunct(c))
            res += c;
    }
    std::cout << res << std::endl;

    return 0;
}