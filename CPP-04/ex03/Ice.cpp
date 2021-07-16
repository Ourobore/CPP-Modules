/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:56:55 by user42            #+#    #+#             */
/*   Updated: 2021/07/16 17:38:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(Ice const &rhs) : AMateria(rhs)
{
}

Ice&	Ice::operator=(Ice const &rhs)
{
	(void)rhs;
	return (*this);
}

Ice::~Ice(void)
{
}

AMateria*	Ice::clone(void) const
{
	return (new Ice);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}