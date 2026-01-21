
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "\n=== Correct Animal ===\n" << std::endl;
    
    const Animal *a = new Dog();
    const Animal *b = new Cat();
    const Animal *c = new Animal();

    std::cout << std::endl;

    std::cout << "Type   : " << a->getType() << std::endl;
    std::cout << "Type   : " << b->getType() << std::endl;

    std::cout << std::endl;

    a->makeSound();
    b->makeSound();
    c->makeSound();

    std::cout << std::endl;

    delete a;
    delete b;
    delete c;


    std::cout << "\n=== Wrong Animal ===\n" << std::endl;

    const WrongAnimal *d = new WrongCat();
    const WrongAnimal *e = new WrongAnimal();

    std::cout << std::endl;

    std::cout << "Type        : " << d->getType() << std::endl;
    std::cout << "Type        : " << e->getType() << std::endl;

    std::cout << std::endl;

    d->makeSound(); 
    e->makeSound();

    std::cout << std::endl;

    delete d;
    delete e;

    return (0);
}
