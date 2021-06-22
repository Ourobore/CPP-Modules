/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:28:21 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/22 15:14:49 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) const
{
	Zombie *newZombie = new Zombie(name, this->_type);

	return (newZombie);
}

void	ZombieEvent::randomChump(void) const
{
	std::string name[3] = {
						"Jessy",
						"James",
						"Meowth"
						};

	Zombie	*zombie_random;
	zombie_random = this->newZombie(name[std::rand() % 3]);
	zombie_random->announce();
	delete zombie_random;
}