/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:08:03 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/29 11:44:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"

std::string	randomName(void)
{
	std::string	name[5] = 
						{
							"Jessy",
							"James",
							"Meowth",
							"Wobbuffet",
							"Bellsprout"
						};

	return (name[std::rand() % 5]);
}

int main(void)
{
	srand(time(NULL));

	Zombie*	horde;
	int		N = 5;

	horde = zombieHorde(N);
	for (int i = 0; i < N; i++)
		horde[i].announce();
	std::cout << std::endl;
	delete [] horde;
}