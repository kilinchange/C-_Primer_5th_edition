#include <iostream>
#include <string>
#include <cstring>

int compare_cstring(char *s1, char *s2)
{
    return strcmp(s1, s2);
}

int compare_string(std::string s1, std::string s2)
{
    if (s1 > s2) return 1;
    else if (s1 < s2) return -1;
    else return 0;
}

int main()
{
    return 0;
}