#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list<int> lst(vec.rbegin() + 3, vec.rend() - 3);
    ostream_iterator<int> out(cout);
    copy(lst.begin(), lst.end(), out);
    return 0;
}