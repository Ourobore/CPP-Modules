/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:28:21 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/22 14:18:51 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, this->_type);

	return (zombie);
}