#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle", "abcdefgi"};
    cout << count_if(words.begin(), words.end(), [](string &s)
                     { return s.size() > 6; })
         << endl;
    return 0;
}