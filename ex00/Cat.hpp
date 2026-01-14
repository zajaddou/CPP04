
#include "Animal.hpp"

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &src);
        ~Cat();
};

#endif