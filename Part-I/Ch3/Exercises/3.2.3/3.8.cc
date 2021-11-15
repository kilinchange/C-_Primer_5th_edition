#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (decltype(s.size()) index = 0; 
        index != s.size(); index++)
        s[index] = 'x';
    cout << s << endl;

    cin >> s;
    decltype(s.size()) index = 0;
    while (index < s.size())
    {
        s[index] = 'x';
        index++;
    }
    cout << s << endl;

    return 0;
}