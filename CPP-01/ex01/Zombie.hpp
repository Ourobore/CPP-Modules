/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:28:31 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/29 11:35:13 by user42           ###   ########.fr       */
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
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void		announce(void) const;
		void		setName(std::string name);
};

#endif
