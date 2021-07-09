/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:53:08 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/09 15:15:16 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* meta = new Animal();
	
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << meta->getType() << std::endl;
	
	std::cout << "--------------------------------" << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound(); // will output the dog sound!
	meta->makeSound(); // will output the animal sound!
	
	std::cout << std::endl;

	const WrongAnimal* y = new WrongCat();
	const WrongAnimal* x = new WrongAnimal();

	std::cout << y->getType() << std::endl;
	std::cout << x->getType() << std::endl;
	
	std::cout << "--------------------------------" << std::endl;
	x->makeSound(); // will output the wrong animal sound!
	y->makeSound(); // will output the wrong animal sound!
}