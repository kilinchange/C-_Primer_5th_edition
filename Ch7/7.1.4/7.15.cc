#include <iostream>
#include <string>

struct Person {
    Person() = default;
    Person(const std::string name, const std::string address)
        : name(name), address(address) {}
    Person(std::istream &is) { read(is, *this); }

    std::string get_name() const { return name; }
    std::string get_address() const { return address; }

    std::string name = "dcj";
    std::string address = "none";
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