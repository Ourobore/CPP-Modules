/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:11:30 by user42            #+#    #+#             */
/*   Updated: 2021/07/07 21:19:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "robot.hpp"

int	main(void)
{
	ClapTrap none;
	ClapTrap numberOne("Micky");

	std::cout << none << std::endl;
	std::cout << numberOne << std::endl;

	none.attack("Micky");
	numberOne.takeDamage(none.getAtkDamage());
	numberOne.beRepaired(3);

	std::cout << none << std::endl;
	std::cout << numberOne << std::endl;

	std::cout << std::endl;

	ClapTrap	a;
	ClapTrap	b("Jimmy");

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	b = a;
	std::cout << b << std::endl;

	std::cout << std::endl;
	std::cout << "#####################Ex01#######################" << std::endl;
	std::cout << std::endl;

	ScavTrap i;
	ScavTrap j("Bobby");
	ScavTrap k("Greg");
	ScavTrap c(j);

	std::cout << i << std::endl;
	std::cout << j << std::endl;
	std::cout << k << std::endl;

	j.beRepaired(100);
	std::cout << j << std::endl;
	k.attack("Bobby");
	j.takeDamage(k.getAtkDamage());
	std::cout << j << std::endl;
	k.guardGate();

	std::cout << std::endl;
	std::cout << "####################Destructors#####################" << std::endl;
	std::cout << std::endl;
}