#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    istream_iterator<int> in_iter(cin), eof;
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> vec;
    copy(in_iter, eof, back_inserter(vec));
    sort(vec.begin(), vec.end());
    unique_copy(vec.begin(), vec.end(), out_iter);
    return 0;
}