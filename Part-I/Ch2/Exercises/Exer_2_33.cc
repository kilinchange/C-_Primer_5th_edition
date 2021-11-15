#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;    // b 是一个整数（ci的顶层const特性被忽略掉了）
    auto c = cr;    // c 是一个整数（cr是ci的别名，ci本身是一个顶层const）
    auto d = &i;    // d 是一个整型指针
    auto e = &ci;   // e 是一个指向整数常量的指针（对常量对象取地址是一种底层const）
    const auto f = ci;  // ci 的推演类型是 int，f 是 const int
    auto &g = ci;   // g 是一个整型常量引用，绑定到 ci
    // auto &h = 42;    // 错误：不能为非常量引用绑定字面值
    const auto &j = 42;     // 正确：可以为常量引用绑定字面值

    std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << std::endl;
    a = 42;
    b = 42; 
    c = 42;
    // d = 42;
    // e = 42;
    // g = 42;
    std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << std::endl;

    return 0;
}