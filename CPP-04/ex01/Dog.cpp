/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:32:23 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/11 10:47:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp04.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain)
{
	std::cout << "Constructor: Dog" << std::endl;
}

Dog::Dog(Dog const &rhs)
{
	std::cout << "Copy constructor: Dog" << std::endl;
	*this = rhs;
}

Dog& Dog::operator=(Dog const &rhs)
{
	std::cout << "Assignment overload: Dog" << std::endl;
	if (this != &rhs)
	{
		this->setType(rhs.getType());
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Destructor: Dog" << std::endl;
	delete _brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "The dog makes ouafff!" << std::endl;
}