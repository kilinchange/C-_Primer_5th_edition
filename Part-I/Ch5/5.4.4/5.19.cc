#include <iostream>
#include <string>

int main()
{
    do {
        std::string s1, s2;
        if (std::cin >> s1 >> s2)
            std::cout << ((s1.size() < s2.size()) ? s1 : s2) << std::endl;
    } while (std::cin);

    return 0;
}