#include < string>

class Book
{
    Book() = default;
    Book(std::instream &is)
    {
        std::cin >> name >> price >> std::endl;
    }
    Book(std::string name, int price) : name(name), price(price) {}
    std::string name;
    int price;
}