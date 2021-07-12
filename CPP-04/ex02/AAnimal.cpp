/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:01:38 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/12 12:39:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp04.hpp"

AAnimal::AAnimal(void) : _type("Not known")
{
	std::cout << "Constructor: Animal (Default)" << std::endl;
}
AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "Constructor: Animal" << std::endl;
}

AAnimal::AAnimal(AAnimal const &rhs)
{
	std::cout << "Copy constructor: Animal" << std::endl;
	*this = rhs;
}

AAnimal&	AAnimal::operator=(AAnimal const &rhs)
{
	std::cout << "Assignment overload: Animal" << std::endl;
	if (this != &rhs)
		this->setType(rhs.getType());
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor: Animal" << std::endl;
}

void		AAnimal::makeSound(void) const
{
	std::cout << "What sound makes a basic animal? Grrr?" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

void		AAnimal::setType(std::string type)
{
	this->_type = type;
}
