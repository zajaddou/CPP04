
#include "Animal.hpp"

Animal::Animal() : type("? ? ? ?")
{
    std::cout << "Animal - Constructor" << std::endl;
};

Animal::~Animal()
{
    std::cout << "Animal - Destructor\n" << std::endl;
};

Animal::Animal(const Animal &src) : type(src.type)
{
    std::cout << "Animal - Copy Constructor" << std::endl;
};

Animal &Animal::operator=(const Animal &src)
{
    std::cout << "Animal - Copy Assignment" << std::endl;
    this->type = src.type;
    return (*this);
};

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Animal - ? ? ? ?" << std::endl;
}
