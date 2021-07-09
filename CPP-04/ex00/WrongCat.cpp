/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:40:34 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/09 14:52:00 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
}

WrongCat::WrongCat(WrongCat const &rhs)
{
	*this = rhs;
}

WrongCat& WrongCat::operator=(WrongCat const &rhs)
{
	if (this != &rhs)
		this->setType(rhs.getType());
	return (*this);
}

WrongCat::~WrongCat(void)
{
}

void	WrongCat::makeSound(void) const
{
	std::cout << "The WRONG cat makes uuuoaim!" << std::endl;
}