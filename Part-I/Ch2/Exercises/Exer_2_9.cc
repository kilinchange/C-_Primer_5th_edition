#include <iostream>

void f1()
{
    int input_value;
    std::cin >> input_value;
}

void f2()
{
    int i = { 3 };
}

void f3()
{
    double wage;
    double salary = wage = 9999.99;
}

void f4()
{
    int i = 3.14;
}

int main()
{
    f1();
    f2();
    f3();
    f4();

    return 0;
}