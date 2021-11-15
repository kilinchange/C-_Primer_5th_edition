#include < string>

class Book
{
    Book() : Book("", 0){};
    Book(std::instream &is) : Book()
    {
        std::cin >> name >> price >> std::endl;
    }
    Book(std::string name, int price) : name(name), price(price) {}

    std::string name;
    int price;
}