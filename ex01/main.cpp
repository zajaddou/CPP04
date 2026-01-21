
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *list[100];

    for (int i = 0; i < 50; i++)
        list[i] = new Cat();

    for (int i = 50; i < 100; i++)
        list[i] = new Dog();

    for (int i = 0; i < 100; i++)
        delete list[i];

    return (0);
}
