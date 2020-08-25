#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string; 

int main()
{
    string res1, res2, temp;
    string join1 = "", join2 = " ";
    while (cin >> temp)
    {
        res1 += temp + join1;
        res2 += temp + join2;
    }
    cout << res1 << '\n' << res2 << endl;

    return 0;
}