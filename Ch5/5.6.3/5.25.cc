#include <iostream>
#include <stdexcept>

int main()
{
    int a, b;
    begin:
        std::cin >> a >> b;
        try
        {
            if (b == 0) throw std::runtime_error("divisor should not be zero!");
            std::cout << a / b << std::endl;
        }
        catch(std::runtime_error e)
        {
            std::cerr << e.what() << '\n';
            std::cout << "If you want to input again, please enter 1, else enter 0:" << std::endl;
            int temp;
            std::cin >> temp;
            if (temp == 1) goto begin;
        }
    

    return 0;
}