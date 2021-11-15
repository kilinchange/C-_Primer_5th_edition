#include <iostream>
#include <string>

struct Person
{
    Person() = default;
    Person(const std::string name, const std::string address)
        : name(name), address(address) {}
    Person(std::istream &is);

public:
    std::string get_name() const { return name; }
    std::string get_address() const { return address; }

private:
    std::string name = "dcj";
    std::string address = "none";
};

std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.get_name() << " " << person.get_address();
    return os;
}

Person::Person(std::istream &is)
{
    is >> name >> address;
}