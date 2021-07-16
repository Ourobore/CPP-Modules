/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:23:54 by user42            #+#    #+#             */
/*   Updated: 2021/07/16 19:18:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

AMateria::AMateria(void)
{
	std::cout << "here test" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
}

AMateria::AMateria(AMateria const &rhs) : _type(rhs.getType())
{
	std::cout << "AMateria copy" << std::endl;
}

AMateria::AMateria(AMateria* rhs) : _type(rhs->getType())
{
	std::cout << "AMateria copy pointer" << std::endl;
}

AMateria& AMateria::operator=(AMateria const &rhs)
{
	(void)rhs;
	return (*this);
}

AMateria::~AMateria(void)
{
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}

std::string const & AMateria::getType(void) const
{
	return (_type);
}