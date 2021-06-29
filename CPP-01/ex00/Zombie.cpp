/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:28:28 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/29 11:08:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << this->_getNameplate() << " " << "Nooo, I don't wanna die agaiiin!" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_getNameplate() << " " << this->_getPunchline() << std::endl;
}

std::string	Zombie::_getNameplate(void) const
{
	return ("<" + this->_name + ">");
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
