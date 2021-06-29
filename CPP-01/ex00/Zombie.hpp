/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:28:31 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/22 15:03:21 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "brainz.hpp"

class Zombie
{
	private:
		std::string	_name;
		
		std::string	_getNameplate(void) const;
		std::string	_getPunchline(void) const;

	public:
		Zombie(std::string name);
		~Zombie(void);

		void		announce(void) const;
};

#endif
