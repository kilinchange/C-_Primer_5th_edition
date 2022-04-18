#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    vector<double> vec{1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    cout << accumulate(vec.begin(), vec.end(), 0) << endl;
    return 0;
}