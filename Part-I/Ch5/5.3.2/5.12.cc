#include <iostream>
#include <string>

int main()
{
    std::string word;
    int counter = 0;
    while (std::cin >> word) {
        char prev = ' ';
        for (auto &c: word) {
            if (prev == 'f') {
                switch (c) {
                    case 'f':
                    case 'l':
                    case 'i':
                        counter++;
                        break;
                    default:
                        break;
                }
            }
            prev = c;
        }
    }
    std::cout << counter << std::endl;

    return 0;
}