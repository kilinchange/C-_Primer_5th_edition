#include <iostream>
#include <string>

int main()
{
    std::string s, prev;
    int flag = 0;
    while (std::cin >> s) {
        if (s == prev) {
            flag = 1;
            break;
        }
        prev = s;
    }
    if (flag) std::cout << s << std::endl;
    else std::cout << "No word!" << std::endl;

    return 0;
}