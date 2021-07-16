/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:40:49 by user42            #+#    #+#             */
/*   Updated: 2021/07/16 17:34:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

Character::Character(void)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const &rhs) : _name(rhs.getName())
{
	for (int i = 0; i < 4; i++)
	{
		if (rhs._inventory[i] != NULL)
			_inventory[i] = rhs._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

Character&	Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i] != NULL)
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
			if (rhs._inventory[i] != NULL)
				_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i] != NULL)
			delete _inventory[i];
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i] == NULL)
			_inventory[i] = m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
}

std::string	const & Character::getName(void) const
{
	return (this->_name);
}