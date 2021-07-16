/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:25:43 by user42            #+#    #+#             */
/*   Updated: 2021/07/16 20:45:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

int main()
{
	std::cout << "##### Subject tests #####" << std::endl;
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	std::cout << std::endl;
	std::cout << "##### My tests #####" << std::endl;

	AMateria*	source = new Ice;
	std::cout << "Source: " << source->getType() << std::endl;
	std::cout << std::endl;
	
	std::cout << "Copy constructor test:" << std::endl;
	AMateria*	copy = source->clone();
	std::cout << "Copy: " << copy->getType() << std::endl;
	std::cout << std::endl;

	std::cout << "Assignement test:" << std::endl;
	AMateria*	assign = new Cure;
	std::cout << "Assign (before assignement): " << assign->getType() << std::endl;
	*assign = *source;
	std::cout << "Assign (after assignement): " << assign->getType() << std::endl;

	delete source;
	delete copy;
	delete assign;

	//ICharacter* dummy = new Character("Dummy");

	//std::cout << "Equip / use with full / empty inventory or wrong index (should display nothing)" << std::endl;

	return 0;
}