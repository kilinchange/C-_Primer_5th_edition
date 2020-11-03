#include <iostream>
#include "../common/Sales_data.h"

int main()
{
    Sales_data item1;
    Sales_data item2("ONE");
    Sales_data item3("TWO", 3, 22.3);
    Sales_data item4(std::cin);

    return 0;
}