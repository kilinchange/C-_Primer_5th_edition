#include <iostream>

int calc(int, int)
{
    return 1;
}
int calc(const int, const int)
{
    return 0;
}

int get();
// double get();

int *reset(int *);
double *reset(double *);

int main()
{
    std::cout << calc(1, 1) << std::endl;
    return 0;
}