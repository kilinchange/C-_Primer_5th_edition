#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

void a()
{
    vector<int> vec;
    list<int> lst;
    int i;
    while (cin >> i)
        lst.push_back(i);
    copy(lst.cbegin(), lst.cend(), back_inserter(vec));
}

void b()
{
    vector<int> vec;
    vec.reserve(10);
    fill_n(back_inserter(vec), 10, 0);
}

int main()
{
    a();
    b();
    return 0;
}