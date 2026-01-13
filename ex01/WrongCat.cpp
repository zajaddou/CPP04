/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:33:11 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/13 10:54:22 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
};

WrongCat::WrongCat(const WrongCat &src)
{
    *this = src;
};

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    this->type = src.type;
    return (*this);
};

WrongCat::~WrongCat()
{
};

void WrongCat::makeSound() const
{
    std::cout << "makeSound : WrongCat Sound " << std::endl;
};