#include <vector>
#include <iostream>

int main()
{
    std::vector<int> ivec (9);
    std::vector<int>::size_type cnt = ivec.size();
    for (std::vector<int>::size_type ix = 0;
        ix != ivec.size(); ix++, cnt--)
        ivec[ix] = cnt;
    
    for (auto v : ivec)
        std::cout << v << std::endl;

    return 0;
}