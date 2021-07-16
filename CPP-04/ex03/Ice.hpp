/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:53:47 by user42            #+#    #+#             */
/*   Updated: 2021/07/16 16:48:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "ex03.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &rhs);
		Ice& operator=(Ice const &rhs);
		virtual ~Ice(void);

		AMateria* clone(void) const;
		void	use(ICharacter& target);
};

#endif