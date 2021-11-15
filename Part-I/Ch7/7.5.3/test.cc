#include <iostream>

class X
{
public:
    static int val = 1;
    static int output()
    {
        std::cout << 1 << std::endl;
    }
};

int main()
{
    X x;
    X::output();
    x.output();
    std::cout << x.val << std::endl;

    return 0;
}