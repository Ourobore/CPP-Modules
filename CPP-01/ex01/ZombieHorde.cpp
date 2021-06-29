/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:09:27 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/29 11:42:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"

Zombie*	zombieHorde(int N)
{
	Zombie*	horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setName(randomName());
	return (horde);
}
