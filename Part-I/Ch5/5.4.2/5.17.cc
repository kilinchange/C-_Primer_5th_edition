#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec1 {1,2,3,4,5}, vec2 {1,3,4,5,6,7};
    int flag = 1;
    for (decltype(vec1.size()) i = 0; i < vec1.size(); i++)
    {
        if (vec1[i] != vec2[i]) {
            flag = 0;
            break;
        }
    }
    if (flag) std::cout << "True" << std::endl;
    else std::cout << "False" << std::endl;


    return 0;
}