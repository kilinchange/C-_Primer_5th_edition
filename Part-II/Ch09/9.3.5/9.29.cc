#include <vector>
#include <iostream>
using namespace std;

void print_func(vector<int> vec)
{
    for (auto &v : vec)
    {
        cout << v << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> vec(25, 10);
    vec.resize(100);
    print_func(vec);
    vec.resize(10);
    print_func(vec);
    return 0;
}