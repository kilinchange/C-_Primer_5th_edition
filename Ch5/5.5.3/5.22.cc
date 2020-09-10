#include <iostream>

int get_size()
{
    return 42;
}

int main()
{
    // begin:
    //     int sz = get_size();
    //     if (sz <= 0) {
    //         goto begin;
    //     }
    
    int sz;
    while (get_size() <= 0) {}

    return 0;
}