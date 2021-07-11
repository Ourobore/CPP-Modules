/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:10:59 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/11 10:46:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp04.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain)
{
	std::cout << "Constructor: Cat" << std::endl;
}

Cat::Cat(Cat const &rhs)
{
	std::cout << "Copy constructor: Cat" << std::endl;
	*this = rhs;
}

Cat& Cat::operator=(Cat const &rhs)
{
	std::cout << "Assignment overload: Cat" << std::endl;
	if (this != &rhs)
	{
		this->setType(rhs.getType());
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Destructor: Cat" << std::endl;
	delete _brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "The cat makes miaouuu!" << std::endl;
}