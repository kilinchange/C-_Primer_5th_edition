#include <iostream>

int exchange(int **a, int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    return 0;
}