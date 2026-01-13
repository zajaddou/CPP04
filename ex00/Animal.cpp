/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:14:48 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/13 10:50:52 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
};

Animal::Animal(const Animal &src)
{
    *this = src;
};

Animal &Animal::operator=(const Animal &src)
{
    this->type = src.type;
    return (*this);
};

Animal::~Animal()
{
};

void Animal::makeSound() const
{
    std::cout << "makeSound : Animal Sound" << std::endl;
};

std::string Animal::getType() const
{
    return (this->type);
}; 