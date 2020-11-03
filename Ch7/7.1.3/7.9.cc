#include <iostream>
#include <string>

struct Person {
    std::string get_name() const { return name; }
    std::string get_address() const { return address; }

    std::string name;
    std::string address;
};

std::istream &read(std::istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.name << " " << person.address;
    return os;
}