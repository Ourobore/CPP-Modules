/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:35:21 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/09 12:42:51 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CPP
# define DIAMONDTRAP_CPP

# include "robot.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;

	public:
		DiamondTrap(void);
		DiamondTrap(std::string	name);
		DiamondTrap(DiamondTrap const &rhs);
		FragTrap&	operator=(DiamondTrap const &rhs);
		~DiamondTrap(void);

		void	attack(std::string const &target) const;

		void	whoAmI(void) const;

		std::string	getName(void) const;
};

std::ostream& operator<<(std::ostream &o, DiamondTrap const &rhs);

#endif