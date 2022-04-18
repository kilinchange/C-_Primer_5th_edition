#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5};
    ostream_iterator<int> out(cout);
    copy(vec.rbegin(), vec.rend(), out);
    return 0;
}