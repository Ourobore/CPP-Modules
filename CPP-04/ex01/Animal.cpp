/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:01:38 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/10 18:35:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp04.hpp"

Animal::Animal(void) : _type("Not known")
{
}
Animal::Animal(std::string type) : _type(type)
{
}

Animal::Animal(Animal const &rhs)
{
	*this = rhs;
}

Animal&	Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		this->setType(rhs.getType());
	return (*this);
}

Animal::~Animal(void)
{
}

void		Animal::makeSound(void) const
{
	std::cout << "What sound makes a basic animal? Grrr?" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void		Animal::setType(std::string type)
{
	this->_type = type;
}
