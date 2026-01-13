/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:14:48 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/13 11:04:11 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
};

Brain::Brain(const Brain &src)
{
    *this = src;
};

Brain &Brain::operator=(const Brain &src)
{
    return (*this);
};

Brain::~Brain()
{
};
