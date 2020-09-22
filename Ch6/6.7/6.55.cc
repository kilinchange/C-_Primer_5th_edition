#include <iostream>
#include <vector>

int f1(int a, int b) { return a + b; }
int f2(int a, int b) { return a - b; }
int f3(int a, int b) { return a * b; }
int f4(int a, int b) { return a / b; }
typedef decltype(f1) *F;

int main()
{
    std::vector<F> vec;
    vec.push_back(f1);
    vec.push_back(f2);
    vec.push_back(f3);
    vec.push_back(f4);

    return 0;
}