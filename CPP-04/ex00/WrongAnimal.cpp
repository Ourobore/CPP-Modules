/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:39:23 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/09 15:27:07 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp04.hpp"

WrongAnimal::WrongAnimal(void) : _type("Wrong: Not known")
{
}
WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
	*this = rhs;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
		this->setType(rhs.getType());
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "What sound makes a WRONG basic animal? rrrG?" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void		WrongAnimal::setType(std::string type)
{
	this->_type = type;
}