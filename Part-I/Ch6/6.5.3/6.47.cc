#include <iostream>
#include <vector>

void print_vector(std::vector<int> &vec, std::vector<int>::iterator it)
{
#ifndef NDEBUG
    std::cerr << vec.end() - it << " values remains to be printed." << std::endl;
#endif    
    if (it == vec.end()) std::cout << std::endl;
    else {
        std::cout << *it << std::endl;
        print_vector(vec, ++it);
    }
}

int main()
{
    std::vector<int> vec { 1, 2, 3, 4, 5 };
    print_vector(vec, vec.begin());

    return 0;
}