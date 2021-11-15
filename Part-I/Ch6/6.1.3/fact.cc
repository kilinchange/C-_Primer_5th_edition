#include "../6.1.2/Chapter6.h"

int fact(int n)
{
    return n == 1 ? 1 : n * fact(n-1);
}