#include <list>
#include <forward_list>
#include <iostream>
using namespace std;

int main()
{
    {
        list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        auto iter = lst.begin();
        while (iter != lst.end())
        {
            if (*iter % 2 == 1)
            {
                iter = lst.insert(iter, *iter);
                ++iter;
                ++iter;
            }
            else
                iter = lst.erase(iter);
        }
        for (auto &v : lst)
            cout << v << " ";
        cout << "\n";
    }
    {
        forward_list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        auto prev = lst.before_begin();
        auto curr = lst.begin();
        while (curr != lst.end())
        {
            if (*curr % 2 == 1)
            {
                curr = lst.insert_after(curr, *curr);
                prev = curr;
                ++curr;
            }
            else
            {
                curr = lst.erase_after(prev);
            }
        }
        for (auto &v : lst)
            cout << v << " ";
        cout << "\n";
    }
    return 0;
}