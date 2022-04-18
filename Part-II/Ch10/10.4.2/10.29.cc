#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    istream_iterator<string> in(fin), eof;
    ostream_iterator<string> out(cout);
    vector<string> vec;
    copy(in, eof, back_inserter(vec));
    copy(vec.begin(), vec.end(), out);
    return 0;
}