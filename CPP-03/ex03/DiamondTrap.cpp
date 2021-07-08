/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:34:52 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/08 13:28:32 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "robot.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("NoName_clap_name", 0, 0, 0), _name("NoName")
{
	ClapTrap::_name = _name + "_clap_name";
	std::cout << "<" << this->getName() << "> I feel a bit weird..." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30), _name(name)
{
	std::cout << "<" << this->getName() << "> I just got mixed!" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "<" << this->getName() << "> Oh no! Not again!" << std::endl;
}

void	DiamondTrap::attack(std::string const &target) const
{
	std::cout << "<" << this->getName() << "> Here comes my special!" << std::endl;
	this->ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "<" << this->getName() << "> Who will take the blow? Oh it's me..." << std::endl;
	this->FragTrap::takeDamage(amount);
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "<" << this->getName() << "> Thank you! I needed that" << std::endl;
	this->FragTrap::beRepaired(amount);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "<" << this->getName() << "> Am I juste me or am I <" << this->ClapTrap::getName() << ">?" << std::endl;
}

std::string	DiamondTrap::getName(void) const
{
	return (this->_name);
}

std::ostream& operator<<(std::ostream &o, DiamondTrap const &rhs)
{
	o << "<" << rhs.getName() << "> Wanna see my stats?" << std::endl;
	o << "<" << rhs.getName() << ">: HitPoints: " << rhs.getHitPoints() \
		<< " | EnergyPoints: " << rhs.getEnergyPoints() \
		<< " | AtkDamage: " << rhs.getAtkDamage();
	return (o);
}