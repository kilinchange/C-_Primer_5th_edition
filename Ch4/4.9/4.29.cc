#include <iostream>
#include <vector>
#include <string>

int main()
{
    int x[10];
    int *p = x;
    std::cout << sizeof(x) / sizeof(*x) << std::endl;
    std::cout << sizeof(p) / sizeof(*p) << std::endl;

    std::vector<int> vec;
    std::cout << sizeof vec << std::endl;

    std::string str = "gegrtthrtjtr";
    std::cout << sizeof str << std::endl;

    return 0;
}