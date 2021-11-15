#include <iostream>
#include <cstddef>
#include <iterator>

int main()
{
    int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
    using int_array = int[4];

    for (auto &row : ia)
        for (auto col : row)
            std::cout << col << " ";
    std::cout << std::endl;

    constexpr size_t rowCnt = 3, colCnt = 4;
    for (size_t i = 0; i != rowCnt; i++)
        for (size_t j = 0; j != colCnt; j++)
            std::cout << ia[i][j] << " ";
    std::cout << std::endl;

    for (auto p = std::begin(ia); p != std::end(ia); p++)
        for (auto q = std::begin(*p); q != std::end(*p); q++)
            std::cout << *q << " ";
    std::cout << std::endl;

    return 0;
}