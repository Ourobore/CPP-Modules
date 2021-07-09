/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:10:59 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/09 14:28:21 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00.hpp"

Cat::Cat(void) : Animal("Cat")
{
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
}

void	Cat::makeSound(void) const
{
	std::cout << "The cat makes miaouuu!" << std::endl;
}