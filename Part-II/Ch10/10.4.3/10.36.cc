#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> lst{1, 2, 3, 4, 0, 4, 6, 0, 6, 8};
    auto it = find(lst.rbegin(), lst.rend(), 0);
    int p = 1;
    it++;
    for (auto iter = lst.begin(); iter != it.base(); iter++, p++)
        ;
    cout << p << endl;
    return 0;
}