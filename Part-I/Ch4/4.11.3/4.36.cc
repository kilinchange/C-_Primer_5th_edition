#include <iostream>

int main()
{
    int i = 3;
    double d = 3.5;
    i *= static_cast<int>(d);
    std::cout << i << " " << d << std::endl;

    return 0;
}