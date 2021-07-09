/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:10:59 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/09 15:45:20 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp04.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain)
{
	std::cout << "Constructor: Cat" << std::endl;
}

Cat::Cat(Cat const &rhs)
{
	*this = rhs;
}

Cat& Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
		this->setType(rhs.getType());
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