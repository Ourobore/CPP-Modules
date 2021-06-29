/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:48:38 by user42            #+#    #+#             */
/*   Updated: 2021/06/29 14:34:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "violence.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void    HumanA::attack(void) const
{
    std::cout << this->getName() << " attacks with his " << this->_weapon.getType() << std::endl;
}

std::string HumanA::getName(void) const
{
    return (this->_name);
}