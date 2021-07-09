/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:32:23 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/09 15:27:03 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp04.hpp"

Dog::Dog(void) : Animal("Dog")
{
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
}

void	Dog::makeSound(void) const
{
	std::cout << "The dog makes ouafff!" << std::endl;
}