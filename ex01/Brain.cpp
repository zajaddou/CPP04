
#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain - constructor" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain - copy constructor" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& src)
{
    std::cout << "Brain - copy assignment" << std::endl;
    if (this != &src)
    {
        int i = -1;
        while ( ++i < 100 )
            this->ideas[i] = src.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain - destructor" << std::endl;
}
