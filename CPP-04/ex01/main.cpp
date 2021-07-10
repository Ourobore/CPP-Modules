/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:53:08 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/10 21:47:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp04.hpp"

int main()
{
	const Animal* 	j = new Dog();
	const Animal*	i = new Cat();

	delete j;//should not create a leak
	delete i;

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
	delete [] array;
}