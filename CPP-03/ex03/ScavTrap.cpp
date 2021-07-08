/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:56:44 by user42            #+#    #+#             */
/*   Updated: 2021/07/07 21:36:23 by user42           ###   ########.fr       */
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
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "<" << this->getName() << "> But ?! That´s not me !" << std::endl; 
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
	std::cout << "<" << this->getName() << "> No!!! I am still useful!" << std::endl;
}

void	ScavTrap::attack(std::string const &target) const
{
	std::cout << "<" << this->getName() << "> Let´s go! Charge!" << std::endl;
	ClapTrap::attack(target);
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "<" << this->getName() << "> No!!! Please don´t hit me!" << std::endl;
	ClapTrap::takeDamage(amount);
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "<" << this->getName() << "> I need healing!" << std::endl;
	ClapTrap::beRepaired(amount);

}

void	ScavTrap::guardGate(void) const
{
	std::cout << "<" << this->getName() << "> I am now guarding the gate!" << std::endl;
}