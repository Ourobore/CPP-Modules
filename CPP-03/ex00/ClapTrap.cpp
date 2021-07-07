/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:12:41 by user42            #+#    #+#             */
/*   Updated: 2021/07/07 20:55:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "robot.hpp"

ClapTrap::ClapTrap(void) : _name("NoName"), _hitPoints(0), _energyPoints(0), _atkDamage(0)
{
	std::cout << "I have nothing special..." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _atkDamage(0)
{
	std::cout << "Well, fresh from the factory!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << "Am I their sibling?" << std::endl;
	*this = rhs;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "<" << this->getName() << "> Why am I becoming like him?!" << std::endl;
	if (this != &rhs)
	{
		this->setName(rhs.getName());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAtkDamage(rhs.getAtkDamage());
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Bye Bye!" << std::endl;
}

void	ClapTrap::attack(std::string const &target) const
{
	std::cout << "ClapTrap <" << this->getName() << "> attacks <" << target \
			<< ">, causing <" << this->getAtkDamage() << "> points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->setHitPoints(this->getHitPoints() - amount);
	std::cout << "ClapTrap <" << this->getName() << "> has taken <" << amount \
			<< "> points of damage. Ouch !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->setHitPoints(this->getHitPoints() + amount);
	std::cout << "ClapTrap <" << this->getName() << "> has been repaired by <" << amount \
			<< "> hitpoints. Nice !" << std::endl;
}

std::string		ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAtkDamage(void) const
{
	return (this->_atkDamage);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	ClapTrap::setAtkDamage(unsigned int atkDamage)
{
	this->_atkDamage = atkDamage;
}

std::ostream& operator<<(std::ostream &o, ClapTrap const &rhs)
{
	o << "<" << rhs.getName() << ">: HitPoints: " << rhs.getHitPoints() \
		<< " | EnergyPoints: " << rhs.getEnergyPoints() \
		<< " | AtkDamage: " << rhs.getAtkDamage();
	return (o);
}