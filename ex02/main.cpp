
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* a = new Dog();
    const Animal* b = new Cat();

    std::cout << "Type   : " << a->getType() << std::endl;
    std::cout << "Type   : " << b->getType() << std::endl;

    std::cout << std::endl;
    
    a->makeSound();
    b->makeSound();

    std::cout << std::endl;

    delete a;
    delete b;

    std::cout << "\n=== Deep Copy Test ===\n" << std::endl;
    
    Dog basic;
    {
        Dog tmp = basic;
    }

    return (0);
}