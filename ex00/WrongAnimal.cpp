/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:14:48 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/13 10:53:23 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
};

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    *this = src;
};

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    this->type = src.type;
    return (*this);
};

WrongAnimal::~WrongAnimal()
{
};

void WrongAnimal::makeSound() const
{
    std::cout << "makeSound : WrongAnimal Sound" << std::endl;
};

std::string WrongAnimal::getType() const
{
    return (this->type);
}; 