#include <list>

int main()
{
    std::list<int> lst1;
    std::list<int>::interator iter1 = lst1.begin(),
                              iter2 = lst2.end();
    while (iter1 != iter2)
    {
        /* ... */
        ++iter1;
    }

    return 0;
}