/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:53:08 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/11 15:57:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp04.hpp"

int main()
{

	Animal	*j = new Dog;
	Animal	*i = new Cat;
	Animal	*c(i);
	Animal	*test(j);

	std::cout << test->getType() << std::endl; 

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << c->getType() << std::endl;

	std::cout << std::endl;
	*i = *j;
	
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << c->getType() << std::endl;

	std::cout << std::endl;
	i->setType("test");	
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << c->getType() << std::endl;

	delete j;
	delete i;

	Animal* array = new Animal[10];

	for (int a = 0; a < 10; a++)
		array[a] = Dog();

	//for (int b = 0; b < 10; b++)
	//	delete array[b];

	delete [] array;

	/*
	Animal* 	j = new Dog();
	Cat*	i = new Cat();
	Cat*	copy(i);

	*copy = *i;

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << copy->getType() << std::endl;

	i->setType("prout");
	std::cout << i->getType() << std::endl;
	std::cout << copy->getType() << std::endl;


	//delete j;//should not create a leak
	//delete i;
*/
/*
	std::cout << std::endl;

	int nbAnimal = 10;
	Animal*	array = new Animal[nbAnimal];
	for (int q = 0; q < nbAnimal; q++)
	{
		std::cout << q << " " << array[q].getType() << std::endl;
		if (q < nbAnimal / 2)
			array[q] = *(new Dog);
		else
			array[q] = *(new Cat);
		std::cout << q << " " << array[q].getType() << std::endl;
	}

	for (int q = 0; q < nbAnimal; q++)
		delete &array[q];
	delete i;
	delete j;
	delete [] array;
*/
}