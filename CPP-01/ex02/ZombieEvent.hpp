/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:28:24 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/22 14:49:59 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "brainz.hpp"

class ZombieEvent
{
	private:
		std::string	_type;

	public:
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name) const;
		void	randomChump(void) const;
};

#endif
