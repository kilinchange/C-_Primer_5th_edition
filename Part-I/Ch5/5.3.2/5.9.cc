#include <iostream>

int main()
{
    unsigned vowelCnt = 0;
    char ch;
    while (std::cin >> ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowelCnt++;
    }
    std::cout << "Vowel Count: " << vowelCnt << std::endl;

    return 0;
}