#include <iostream>
#include <vector>
#include <cstddef>
// #include <iomanip>

bool compare_arrays(int a1[], int a2[], size_t s1, size_t s2)
{
    if (s1 != s2) return false;
    for (size_t i = 0; i < s1; i++)
        if (a1[i] != a2[i]) return false;
    return true;
}


bool compare_vectors(std::vector<int> v1, std::vector<int> v2)
{
    return v1 == v2;
}


int main()
{   
    int ia1[10] = {1,2,3,4,5,6,7,8,9,10}, ia2[10] = {1,2,2,4,5,6,7,8,9,10};
    std::vector<int> vec1 {1,2,3}, vec2 {1,3,3};
    std::cout << std::boolalpha << compare_arrays(ia1, ia2, 10, 10) << std::endl;
    std::cout << std::noboolalpha << compare_vectors(vec1, vec2) << std::endl;

    return 0;
}