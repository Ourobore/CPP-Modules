/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 16:02:13 by user42            #+#    #+#             */
/*   Updated: 2021/07/16 16:51:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "ex03.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_inventory[4];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &rhs);
		MateriaSource& operator=(MateriaSource const &rhs);
		virtual ~MateriaSource(void);

		void	learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const &type);
};

#endif