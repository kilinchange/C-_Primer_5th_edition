#include <iostream>
#include <string>

int main()
{   
    int i; double d; const std::string *ps; char *pc; void *pv;

    // (a) pv = (void*) ps;
    pv = static_cast<void*>(const_cast<std::string*>(ps));

    // i = int(*pc)
    i = static_cast<int>(*pc);

    // pv = (void*)ps;
    pv = static_cast<void*>(const_cast<std::string*>(ps));

    // pc = (char*) pv;
    pc = static_cast<char*>(pv);

    return 9;
}