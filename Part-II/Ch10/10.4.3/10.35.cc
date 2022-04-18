#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5};
    ostream_iterator<int> out(cout);
    for (auto it = vec.end(); it != vec.begin();)
    {
        out = *(--it);
    }
    return 0;
}