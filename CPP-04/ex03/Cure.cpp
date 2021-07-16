/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:06:14 by user42            #+#    #+#             */
/*   Updated: 2021/07/16 17:38:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const &rhs) : AMateria(rhs)
{
}

Cure&	Cure::operator=(Cure const &rhs)
{
	(void)rhs;
	return (*this);
}

Cure::~Cure(void)
{
}

AMateria*	Cure::clone(void) const
{
	return (new Cure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}