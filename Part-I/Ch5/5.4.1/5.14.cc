#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string prev, temp, word;
    int counter = 1, maxCount = 0;
    while (std::cin >> temp) {
        if (temp == prev)
            counter += 1;
        else
        {
            if (maxCount < counter) {
                word = prev;
                maxCount = counter;
            }            
            prev = temp;
            counter = 1;
        }
    }
    if (maxCount < counter) {
        word = prev;
        maxCount = counter;
    }
    if (word == "")
        std::cout << "No word!" << std::endl;
    else
        std::cout << word << ": " << maxCount << std::endl;

    return 0;
}