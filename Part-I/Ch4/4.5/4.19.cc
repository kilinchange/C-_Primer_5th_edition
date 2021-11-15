#include <iostream>
#include <vector>

int main()
{
    int *ptr, ival;
    std::vector<int> vec;

    if (ptr != 0 && *ptr++) {}
    if (ival++ && ival) {}
    if (vec[ival++] <= vec[ival]) {}

    return 0;
}