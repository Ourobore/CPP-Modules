/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:28:31 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/24 12:02:28 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "brainz.hpp"

class Zombie
{
	private:
		std::string	_name;
		std::string	_type;
		
		std::string	_getNameType(void) const;
		std::string	_getPunchline(void) const;

	public:
		Zombie(void);
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void	announce(void) const;
		void	setRandomName(void);
		void	setRandomType(void);
};

#endif
