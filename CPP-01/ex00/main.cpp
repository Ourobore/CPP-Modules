/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:28:25 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/29 11:09:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"

std::string	randomName(void)
{
	std::string	name[3] = 
						{
							"Jessy",
							"James",
							"Meowth"
						};

	return (name[std::rand() % 3]);
}

int main(void)
{
	srand(time(NULL));

	//Zombie created with his constructor
	Zombie stackZombie("Jimmy");
	stackZombie.announce();
	std::cout << std::endl;

	//Zombie created via event
	Zombie*	heapZombie;
	heapZombie = newZombie("Heapy");
	heapZombie->announce();
	std::cout << std::endl;

	//Random zombie via event method
	randomChump(randomName());
	std::cout << std::endl;
	
	delete heapZombie;
}