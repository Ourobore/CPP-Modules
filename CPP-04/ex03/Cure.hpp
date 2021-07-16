/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:06:17 by user42            #+#    #+#             */
/*   Updated: 2021/07/16 16:50:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "ex03.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &rhs);
		Cure& operator=(Cure const &rhs);
		virtual ~Cure(void);

		AMateria* clone(void) const;
		void	use(ICharacter& target);
};

#endif