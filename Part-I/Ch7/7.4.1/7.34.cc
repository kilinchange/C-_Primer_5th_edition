#include <string>

class Screen
{
public:
    Screen() = default;
    Screen(pos ht, pos wd, char c)
        : height(ht), width(wd), contents(ht * wd, c) {}
    Screen(pos ht, pos wd)
        : height(ht), width(wd), contents(ht * wd, ' ') {}

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

public:
    typedef std::string::size_type pos;
};