#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s, prev;
    int flag = 0;
    while (std::cin >> s) {
        if (s == prev) {
            if (islower(s[0])) continue;
            flag = 1;
            break;
        }
        prev = s;
    }
    if (flag) std::cout << "The word is: " << s << std::endl;
    else std::cout << "No word!" << std::endl;

    return 0;
}