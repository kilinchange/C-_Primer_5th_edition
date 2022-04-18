#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream fin(argv[1]);
    ofstream fout1(argv[2]), fout2(argv[3]);
    istream_iterator<int> in(fin), eof;
    ostream_iterator<int> out1(fout1, " "), out2(fout2, "\n");
    vector<int> vec(in, eof);
    for (auto &v : vec)
    {
        if (v % 2 == 1)
        {
            out1 = v;
        }
        else
        {
            out2 = v;
        }
    }
    return 0;
}