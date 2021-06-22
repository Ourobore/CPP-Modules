/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:28:28 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/22 15:03:39 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
}

Zombie::~Zombie(void)
{
	std::cout << this->_getNameType() << "Nooo, I don't wanna die agaiiin!" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_getNameType() << " " << this->_getPunchline() << std::endl;
}

std::string	Zombie::_getNameType(void) const
{
	return ("<" + this->_name + " (" + this->_type + ")>");
}

std::string	Zombie::_getPunchline(void) const
{
	std::string punchline[4] = {
								"Braiiiiiiinnnssss...", \
								"I haaave riiiseeeen!", \
								"I'm baaaack!", \
								"WTF is haapeniiing?"
								};
								
	return (punchline[std::rand() % 4]);
}
