/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:09:31 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/24 11:59:58 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "brainz.hpp"

class ZombieHorde
{
	private:
		size_t	_nb_zombie;
		Zombie	*_horde;
	public:
		ZombieHorde(size_t _nb_zombie);
		~ZombieHorde(void);
		Zombie	*getHorde(void) const;
		void	setHorde(Zombie *horde);
};

#endif