/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:28:25 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/22 15:15:52 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"

int main(void)
{
	srand(time(NULL));

	//Zombie created with his constructor
	Zombie zombie_main("Jimmy", "Moron");
	zombie_main.announce();
	std::cout << std::endl;

	//Zombie created via event
	ZombieEvent event;
	event.setZombieType("Rampant");
	Zombie *zombie_event = event.newZombie("OneTooth");
	zombie_event->announce();
	std::cout << std::endl;

	//Random zombie via event method
	event.setZombieType("Runner");
	event.randomChump();
	std::cout << std::endl;
	
	delete zombie_event;
}