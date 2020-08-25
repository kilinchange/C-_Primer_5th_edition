#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int sum = 0, i = 50;
    while (i <= 100)
    {
        sum += i;
        i += 1;
    }
    cout << sum << '\n';

    return 0;
}