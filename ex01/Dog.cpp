
#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    std::cout << "Dog    - Constructor\n" << std::endl;
    type = "Dog";
};

Dog::Dog(const Dog &src) : Animal(src), brain(new Brain())
{
    std::cout << "Dog    - Copy Constructor" << std::endl;
    *brain = *src.brain;
};

Dog::~Dog()
{
    std::cout << "Dog    - Destructor" << std::endl;
    delete brain;
};

Dog &Dog::operator=(const Dog &src)
{
    std::cout << "Dog    - Copy Assignment" << std::endl;
    if (this != &src)
    {
        type = src.type;
        *brain = *src.brain;
    }
    return (*this);
};


void Dog::makeSound() const
{
    std::cout << "Dog    - Woof woof!" << std::endl;
};