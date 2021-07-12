/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:23:54 by user42            #+#    #+#             */
/*   Updated: 2021/07/12 18:02:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.cpp"

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const &type) : _type(type)
{
}

AMateria::AMateria(AMateria const &rhs) : _type(rhs.getType())
{
}

AMateria& AMateria::operator=(AMateria const &rhs)
{
	//if (this != &rhs)
		//this->setType(rhs.getType());
	return (*this);
}

AMateria::~AMateria(void)
{
}

std::string& const AMateria::getType(void) const
{
	return (_type);
}