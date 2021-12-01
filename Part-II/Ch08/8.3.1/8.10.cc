#include <sstream>
#include <vector>
#include <fstream>
#include <string>
#include <iostream>

int main()
{
    std::ifstream in("input.txt");
    std::vector<std::string> vec;
    std::string line;
    while (std::getline(in, line))
    {
        vec.push_back(line);
    }
    for (auto &v : vec)
    {
        std::istringstream ss(v);
        std::string word;
        while (ss >> word)
        {
            std::cout << word << std::endl;
        }
    }

    return 0;
}