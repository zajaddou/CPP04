/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:33:11 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/13 11:30:00 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->ptr = new Brain(); 
};

Cat::Cat(const Cat &src)
{
    *this = src;
    this->ptr = new Brain(src);
};

Cat &Cat::operator=(const Cat &src)
{
    this->type = src.type;
    return (*this);
};

Cat::~Cat()
{
};

void Cat::makeSound() const
{
    std::cout << "makeSound : Cat Sound " << std::endl;
};