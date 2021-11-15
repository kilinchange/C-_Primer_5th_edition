int main()
{
    // decltype 指定的类型与 auto 指定的类型一样
    int x = 0;
    decltype(x) y = x;
    auto z = x;

    // decltype 指定的类型与 auto 指定的类型不一样
    const int a = 2;
    decltype(a) b = a;
    auto c = a;

    return 0;
}