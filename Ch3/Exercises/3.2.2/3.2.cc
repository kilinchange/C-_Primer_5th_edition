#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void read_line();
void read_word();

int main()
{
    // read_line();
    read_word();

    return 0;
}

void read_line()
{
    string line;
    while (getline(cin, line))
        cout << line << endl;
}

void read_word()
{
    string word;
    while (cin >> word)
        cout << word << endl;
}