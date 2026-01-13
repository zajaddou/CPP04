/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:33:18 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/13 10:50:52 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
};

Dog::Dog(const Dog &src)
{
    *this = src;
};

Dog &Dog::operator=(const Dog &src)
{
    this->type = src.type;
    return (*this);
};

Dog::~Dog()
{
};

void Dog::makeSound() const
{
    std::cout << "makeSound : Dog Sound " << std::endl;
};