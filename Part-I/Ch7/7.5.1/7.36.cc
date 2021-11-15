#include <iostream>

struct X
{
    X(int i, int j) : base(i), rem(i % j) {}
    int rem, base;
};

int main()
{
    X obj(2, 5);
    std::cout << obj.rem << " " << obj.base << std::endl;
    return 0;
}