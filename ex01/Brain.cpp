
#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain  - Constructor" << std::endl;
}

Brain::Brain(const Brain& src)
{
    std::cout << "Brain  - Copy constructor" << std::endl;
    *this = src;
}

Brain::~Brain()
{
    std::cout << "Brain  - Destructor" << std::endl;
}

Brain& Brain::operator=(const Brain& src)
{
    std::cout << "Brain  - Copy assignment" << std::endl;
    if (this != &src)
        for (int i = 0; i < 100; i++)
            ideas[i] = src.ideas[i];
    return (*this);
}
