/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:53:08 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/24 11:04:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp04.hpp"

int main()
{
	std::cout << "### Make sound test ###" << std::endl;
	const Animal	*j = new Dog;
	const Animal	*i = new Cat;

	std::cout << "j (Dog): "<< j->getType() << std::endl;
	std::cout << "i (Cat): "<< i->getType() << std::endl;
	j->makeSound();
	i->makeSound();
	
	delete j;
	delete i;
	
	std::cout << std::endl;
	std::cout << "### Deep Copy test ###" << std::endl;
	Animal*	x = new Dog();
	Animal*	y = new Dog(*static_cast<Dog*>(x));
	
	std::cout << "x (Dog): "<< x->getType() << std::endl;
	std::cout << "y (Copy): "<< y->getType() << std::endl;
	std::cout << "x (Dog* casted): " << static_cast<Dog*>(x)->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "y (Dog* casted): " <<  static_cast<Dog*>(y)->getBrain()->getIdeas()[0] << std::endl;

	std::cout << std::endl;

	x->setType("Changed");
	static_cast<Dog*>(x)->getBrain()->getIdeas()[0] = "Just a thought";

	std::cout << "x : "<< x->getType() << std::endl;
	std::cout << "y : "<< y->getType() << std::endl;
	std::cout << "x (Dog* casted): " << static_cast<Dog*>(x)->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "y (Dog* casted): " << static_cast<Dog*>(y)->getBrain()->getIdeas()[0] << std::endl;

	delete x;
	delete y;


	std::cout << std::endl;
	std::cout << "### Deep Assignment test ###" << std::endl;
	Animal* a = new Cat();
	Animal*	b = new Cat();

	std::cout << "a (Cat): "<< a->getType() << std::endl;
	std::cout << "b (Assignement): "<< b->getType() << std::endl;
	std::cout << "a (Cat* casted): " << static_cast<Cat*>(a)->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "b (Cat* casted): " << static_cast<Cat*>(b)->getBrain()->getIdeas()[0] << std::endl;

	*static_cast<Cat*>(b) = *static_cast<Cat*>(a);
	a->setType("Assign");
	static_cast<Cat*>(a)->getBrain()->getIdeas()[0] = "Just another thought";

	std::cout << "a (Cat): "<< a->getType() << std::endl;
	std::cout << "b (Assignement): "<< b->getType() << std::endl;
	std::cout << "a (Cat* casted): " << static_cast<Cat*>(a)->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "b (Cat* casted): " << static_cast<Cat*>(b)->getBrain()->getIdeas()[0] << std::endl;

	delete a;
	delete b;


	std::cout << std::endl;
	std::cout << "### Animal Array test ###" << std::endl;
	int nbAnimal = 10;
	Animal* array[nbAnimal];
	
	for (int i = 0; i < nbAnimal; i++)
	{
		if (i < nbAnimal / 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
		std::cout << i << ": " << array[i]->getType() << std::endl;
		array[i]->makeSound();
	}

	std::cout << std::endl;

	for (int q = 0; q < nbAnimal; q++)
		delete array[q];
}