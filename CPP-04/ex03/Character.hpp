/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:15:33 by user42            #+#    #+#             */
/*   Updated: 2021/07/16 16:50:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ex03.hpp"

class	Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_inventory[4];

	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &rhs);
		Character& operator=(Character const &rhs);
		virtual ~Character(void);

		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);

		std::string const & getName(void) const;
};

#endif