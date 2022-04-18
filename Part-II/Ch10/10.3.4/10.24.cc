#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, const string &b)
{
    return s.size() > b.size();
}

int main()
{
    vector<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle", "abcdefgi"};
    string s = "abc";
    cout << *(find_if(words.begin(), words.end(), bind(check_size, _1, s)))
         << endl;
    return 0;
}