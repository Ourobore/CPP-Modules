/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:56:44 by user42            #+#    #+#             */
/*   Updated: 2021/07/09 13:04:04 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "robot.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "<" << this->getName() << "> Oh no, not again! Why am I the bland one ?!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "<" << this->getName() << "> Yay! I am buffed !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(rhs)
{
	std::cout << "<" << this->getName() << "> Once again I am just a copy... But this time a stronger copy !" << std::endl;
	//*this = rhs;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &rhs)
{
	if (this != &rhs)
	{
		this->setName(rhs.getName());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAtkDamage(rhs.getAtkDamage());
	}
	std::cout << "<" << this->getName() << "> But ?! That´s not me !" << std::endl; 
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "<" << this->getName() << "> No!!! I am still useful!" << std::endl;
}

void	ScavTrap::attack(std::string const &target) const
{
	std::cout << "<" << this->getName() << "> Let´s go! Charge!" << std::endl;
	ClapTrap::attack(target);
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "<" << this->getName() << "> I am now guarding the gate!" << std::endl;
}