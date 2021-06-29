/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:48:38 by user42            #+#    #+#             */
/*   Updated: 2021/06/29 14:38:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "violence.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB(void)
{
}

void    HumanB::attack(void) const
{
    std::cout << this->getName() << " attacks with his " << this->_weapon->getType() << std::endl;
}

std::string HumanB::getName(void) const
{
    return (this->_name);
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}