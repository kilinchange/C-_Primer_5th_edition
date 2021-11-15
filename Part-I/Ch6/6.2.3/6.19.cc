#include <iostream>
#include <string>
#include <vector>

double calc(double);
int count(const std::string &, char);
int sum(std::vector<int>::iterator, std::vector<int>::iterator, int);
std::vector<int> vec(10);

int main()
{
    calc(23.4, 55.1);
    count("abcda", 'a');
    calc(66);
    sum(vec.begin(), vec.end(), 3.8);

    return 0;
}