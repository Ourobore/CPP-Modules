/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:56:44 by user42            #+#    #+#             */
/*   Updated: 2021/07/07 17:22:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "robot.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Oh no, not again! Why am I the bland one ?!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_atkDamage = 20;
	std::cout << "Yay! I am buffed !" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const &rhs)
{
	std::cout << "Once again I am just a copy... But this time a stronger copy !" << std::endl;
	*this = rhs;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "But ?! That´s not me !" << std::endl; 
	if (this != &rhs)
	{
		this->setName(rhs.getName());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAtkDamage(rhs.getAtkDamage());
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "No!!! I am still useful!" << std::endl;
}