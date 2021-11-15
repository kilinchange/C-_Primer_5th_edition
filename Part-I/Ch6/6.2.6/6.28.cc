#include <iostream>
#include <string>
#include <initializer_list>

class ErrCode {};

void error_msg(ErrCode e, std::initializer_list<std::string> il)
{
    std::cout << e.msg() << ": ";
    for (const auto &elem : il)
        std::cout << elem << " ";
    std::cout << std::endl;
}