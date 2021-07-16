/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 16:12:10 by user42            #+#    #+#             */
/*   Updated: 2021/07/16 17:42:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (rhs._inventory[i] != NULL)
			_inventory[i] = rhs._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
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

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i] != NULL)
			delete _inventory[i];
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	return (0);
}