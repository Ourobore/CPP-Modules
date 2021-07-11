/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:01:38 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/11 11:33:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp04.hpp"

Animal::Animal(void) : _type("Not known")
{
	std::cout << "Constructor: Animal (Default)" << std::endl;
}
Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Constructor: Animal" << std::endl;
}

Animal::Animal(Animal const &rhs)
{
	std::cout << "Copy constructor: Animal" << std::endl;
	*this = rhs;
}

Animal&	Animal::operator=(Animal const &rhs)
{
	std::cout << "Assignment overload: Animal" << std::endl;
	if (this != &rhs)
		this->setType(rhs.getType());
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Destructor: Animal" << std::endl;
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
