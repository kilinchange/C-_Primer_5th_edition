#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec {1,2,3};
    auto y = *vec.begin();
    std::cout << y << std::endl;
  
    return 0;
}