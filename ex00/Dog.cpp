
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog    - Constructor" << std::endl;
    this->type = "Dog";
};

Dog::~Dog()
{
    std::cout << "Dog    - Destructor" << std::endl;
};

Dog::Dog(const Dog &src) : Animal(src)
{
    std::cout << "Dog - Copy Constructor" << std::endl;
};

Dog &Dog::operator=(const Dog &src)
{
    std::cout << "Dog - Copy Assignment" << std::endl;
    this->type = src.type;
    return (*this);
};


void Dog::makeSound() const
{
    std::cout << "Dog    - sound..." << std::endl;
};