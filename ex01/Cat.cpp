
#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    std::cout << "Cat    - Constructor\n" << std::endl;
    type = "Cat";
};

Cat::Cat(const Cat &src) : Animal(src), brain(new Brain())
{
    std::cout << "Cat    - Copy Constructor" << std::endl;
    *brain = *src.brain;
};

Cat::~Cat()
{
    std::cout << "Cat    - Destructor" << std::endl;
    delete brain;
};

Cat &Cat::operator=(const Cat &src)
{
    std::cout << "Cat    - Copy Assignment" << std::endl;
    type = src.type;
    *brain = *src.brain;
    return (*this);
};

void Cat::makeSound() const
{
    std::cout << "Cat    - Meow meow!" << std::endl;
};
