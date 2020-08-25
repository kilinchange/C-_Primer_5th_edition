#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (char &c : str)
        c = 'x';
    cout << str << endl;

    return 0;
}