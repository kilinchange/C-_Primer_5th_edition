#include <vector>
#include <iostream>
#include <string>
using std::vector;
using std::string;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    std::cout << v2[0] << std::endl;
    vector<int> v3(10, 42);
    std::cout << v3[0] << std::endl;
    vector<int> v4{10};
    std::cout << v4[0] << std::endl;
    vector<int> v5{10, 42};
    std::cout << v5[0] << std::endl;
    vector<string> v6{10};
    std::cout << v6[0] << std::endl;
    vector<string> v7{10, "hi"};
    std::cout << v7[0] << std::endl;

    return 0;
}