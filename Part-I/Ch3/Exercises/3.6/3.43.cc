#include <iostream>
#include <cstddef>
#include <iterator>

int main()
{
    int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

    for (int (&row)[4] : ia)
        for (int col : row)
            std::cout << col << " ";
    std::cout << std::endl;

    constexpr size_t rowCnt = 3, colCnt = 4;
    for (size_t i = 0; i != rowCnt; i++)
        for (size_t j = 0; j != colCnt; j++)
            std::cout << ia[i][j] << " ";
    std::cout << std::endl;

    for (int (*p)[4] = std::begin(ia); p != std::end(ia); p++)
        for (int *q = std::begin(*p); q != std::end(*p); q++)
            std::cout << *q << " ";
    std::cout << std::endl;

    return 0;
}