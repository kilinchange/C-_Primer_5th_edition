#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec{1, 2, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9};
    list<int> lst;
    unique_copy(vec.begin(), vec.end(), back_inserter(lst));
    for (auto &v : lst)
    {
        cout << v << " ";
    }
    return 0;
}