#include <iostream>

int main()
{
    int x = 3, y = 10;
    int someValue = 1;
    std::cout << (someValue ? ++x, ++y : --x, --y); 

    return 0;
}