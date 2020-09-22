#include <iostream>
#include <vector>

int func(int, int);
typedef decltype(func) *F;

int f1(int a, int b)
{
    return a + b;
}

int main()
{
    std::vector<F> vec;
    vec.push_back(f1);
    return 0;
}