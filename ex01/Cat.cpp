
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat    - Constructor" << std::endl;
    this->type = "Cat";
};

Cat::~Cat()
{
    std::cout << "Cat    - Destructor" << std::endl;
};

Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << "Cat - Copy Constructor" << std::endl;
};

Cat &Cat::operator=(const Cat &src)
{
    std::cout << "Cat - Copy Assignment" << std::endl;
    this->type = src.type;
    return (*this);
};

void Cat::makeSound() const
{
    std::cout << "Cat    - sound..." << std::endl;
};