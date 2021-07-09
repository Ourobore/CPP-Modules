/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:32:23 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/09 15:45:03 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp04.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain)
{
	std::cout << "Constructor: Dog" << std::endl;
}

Dog::Dog(Dog const &rhs)
{
	*this = rhs;
}

Dog& Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
		this->setType(rhs.getType());
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