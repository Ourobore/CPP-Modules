/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:09:27 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/24 12:01:34 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"

ZombieHorde::ZombieHorde(size_t nb_zombie) : _nb_zombie(nb_zombie)
{
	Zombie	*horde = new Zombie[_nb_zombie];

	for (size_t i = 0; i < _nb_zombie; i++)
	{
		horde[i].setRandomName();
		horde[i].setRandomType();
		horde[i].announce();
	}
	this->setHorde(horde);
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->getHorde();
}

Zombie*	ZombieHorde::getHorde(void) const
{
	return (this->_horde);
}

void	ZombieHorde::setHorde(Zombie *horde)
{
	this->_horde = horde;
}
