#include <list>
#include <vector>
using namespace std;

int main()
{
    list<int> lst = {1, 2, 3, 4, 5};
    vector<double> vec1(lst.begin(), lst.end());
    vector<int> vec2 = {5, 4, 3, 2, 1};
    vector<double> vec3(vec2.begin(), vec2.end());

    return 0;
}