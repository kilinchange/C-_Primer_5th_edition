#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> lst;
    auto iter = lst.begin();
    string word;
    while (cin >> word)
        iter = lst.insert(iter, word);

    return 0;
}