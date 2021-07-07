/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:23:27 by user42            #+#    #+#             */
/*   Updated: 2021/07/07 21:36:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "robot.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "<" << this->getName() << "> I´m just a piece of trash..." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "<" << this->getName() << "> Yep, I´m definitly better!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs) : ClapTrap(rhs)
{
	std::cout << "<" << this->getName() << "> Deja vu !" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &rhs)
{
	if (this != &rhs)
	{
		this->setName(rhs.getName());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAtkDamage(rhs.getAtkDamage());
	}
	std::cout << "<" << this->getName() << "> Wait, that´s me?!" << std::endl; 
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "<" << this->getName() << "> I don´t wanna be dismantled..." << std::endl;
}

void	FragTrap::attack(std::string const &target) const
{
	std::cout << "<" << this->getName() << "> I don´t wanna hurt you, but I have to!" << std::endl;
	ClapTrap::attack(target);
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "<" << this->getName() << "> Ouch that hurts" << std::endl;
	ClapTrap::takeDamage(amount);
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "<" << this->getName() << "> I´m dying, please help me!" << std::endl;
	ClapTrap::beRepaired(amount);

}

void	FragTrap::highFiveGuys(void) const
{
	std::cout << "<" << this->getName() << "> Who wants to give me five?" << std::endl;
}