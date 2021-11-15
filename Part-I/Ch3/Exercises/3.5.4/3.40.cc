#include <iostream>
#include <cstring>

int main()
{
    char s1[] = "Hello!", s2[] = "DCJ!", s3[20];
    strcpy(s3, s1);
    strcat(s3, s2);
    std::cout << s3 << std::endl;

    return 0;
}