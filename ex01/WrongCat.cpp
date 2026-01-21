
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat    - Constructor" << std::endl;
    this->type = "WrongCat";
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat    - Destructor" << std::endl;
};

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
    std::cout << "WrongCat    - Copy Constructor" << std::endl;
};

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    std::cout << "WrongCat    - Copy Assignment" << std::endl;
    this->type = src.type;
    return (*this);
};

void WrongCat::makeSound() const
{
    std::cout << "WrongCat    : Meow meow!" << std::endl;
};