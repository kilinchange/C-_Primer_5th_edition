#include <iostream>

int calc(int &, int&);
int calc(const int&, const int&);

int calc(char*, char*);
int calc(const char*, const char*);

int calc(char*, char*) { return 1; };
int calc(char* const, char* const) { return 0 };

int main()
{
    char *pc1, *pc2;
    calc(pc1, pc2);
    return 0;
}