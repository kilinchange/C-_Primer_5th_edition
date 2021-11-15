#include <vector>

class NoDefault
{
public:
    NoDefault(int x) : val(x) {}
    int val;
};

class C
{
public:
    NoDefault c_member;
    C() : c_member(NoDefault(0)) {}
};

int main()
{
    std::vector<C> vec(10);
    return 0;
}