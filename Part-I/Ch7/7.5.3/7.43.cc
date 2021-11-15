#include <iostream>
#include <string>
using std::string;

class NoDefault
{
public:
    NoDefault(string x) : val(x) {}
    string val;
};

class C
{
public:
    NoDefault c_member;
    C() : c_member("fe") {}
};

int main()
{
    C obj;
    std::cout << obj.c_member.val << std::endl;
    return 0;
}