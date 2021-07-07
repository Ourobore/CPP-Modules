/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:55:45 by user42            #+#    #+#             */
/*   Updated: 2021/07/07 17:08:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "robot.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &rhs);
		ScavTrap&	operator=(ScavTrap const &rhs);
		~ScavTrap(void);

		void	guardGuate(void) const;
};

std::ostream& operator<<(std::ostream &o, ClapTrap const &rhs);

#endif