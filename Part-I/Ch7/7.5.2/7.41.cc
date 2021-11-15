#include <iostream>
#include <string>

class Sales_data;
std::istream &read(std::istream &is, Sales_data &item);
class Sales_data
{
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);

public:
    Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n)
    {
        std::cout << "construct using 'string', 'unsigned int', 'double'" << std::endl;
    }
    Sales_data() : Sales_data("", 0, 0)
    {
        std::cout << "construct using defalut" << std::endl;
    }
    Sales_data(const std::string &s) : Sales_data(s, 0, 0)
    {
        std::cout << "construct using 'string'" << std::endl;
    }

    Sales_data(std::istream &is) : Sales_data()
    {
        std::cout << "construct using istream" << std::endl;
        read(is, *this);
    }

    std::string isbn() const
    {
        return bookNo;
    }
    Sales_data &combine(const Sales_data &);

private:
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

inline double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

int main()
{
    Sales_data X1(std::cin);
    std::cout << "~~~~~~~~~~~~~~~~" << std::endl;
    Sales_data X2;
    std::cout << "~~~~~~~~~~~~~~~~" << std::endl;
    Sales_data X3("2");
    std::cout << "~~~~~~~~~~~~~~~~" << std::endl;
    Sales_data X4("2", 1, 45.6);
    std::cout << "~~~~~~~~~~~~~~~~" << std::endl;
    return 0;
}