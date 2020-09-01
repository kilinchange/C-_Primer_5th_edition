#include <iostream>

int main()
{
    int a, b, c, d;
    while (std::cin >> a >> b >> c >> d && a > b && b > c && c > d) std::cout << "Bingo!" << std::endl;

    return 0;
}