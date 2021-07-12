/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:55:47 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/12 12:38:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AANIMAL_HPP
# define AANIMAL_HPP

# include "cpp04.hpp"

class	AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(AAnimal const &rhs);
		AAnimal& operator=(AAnimal const &rhs);
		virtual ~AAnimal(void);
		
		virtual void	makeSound(void) const = 0;
			// Could have used a pure virtual function and made the Animal class abstract
			// We don't need an instance of Animal in this case. Just an Animal means nothing
			// But it's not the exercice, the main declare an instance of Animal

		std::string	getType(void) const;
		void		setType(std::string type);
};

#endif