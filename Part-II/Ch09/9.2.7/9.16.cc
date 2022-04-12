#include <vector>
#include <iostream>
#include <list>
using namespace std;

int main()
{
    vector<int> v1{1, 2, 3, 4, 5};
    list<int> v2{1, 2, 3, 4, 5, 6};
    list<int>::iterator iter = v2.begin();
    bool is_equal = (v1.size() == v2.size());
    for (decltype(v1.size()) idx = 0; is_equal && idx < v1.size(); ++idx)
    {
        is_equal &= (v1[idx] == *iter);
        ++iter;
    }
    cout << is_equal << endl;

    return 0;
}