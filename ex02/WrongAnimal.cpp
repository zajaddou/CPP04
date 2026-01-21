
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal - Constructor" << std::endl;
};

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal - Destructor" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &src) : type(src.type)
{
    std::cout << "WrongAnimal - Copy Constructor" << std::endl;
};

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "WrongAnimal - Copy Assignment" << std::endl;
    this->type = src.type;
    return (*this);
};

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal : ? ? ? ? ?" << std::endl;
}
