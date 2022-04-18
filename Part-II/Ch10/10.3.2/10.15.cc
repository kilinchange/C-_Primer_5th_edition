#include <iostream>
using namespace std;

int main()
{
    int a = 123;
    auto sum = [a](int b)
    { return a + b; };
    cout << sum(3) << endl;
    return 0;
}