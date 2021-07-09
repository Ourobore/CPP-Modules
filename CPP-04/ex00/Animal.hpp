/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:55:47 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/09 15:17:38 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include "ex00.hpp"

class	Animal
{
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const &rhs);
		Animal& operator=(Animal const &rhs);
		~Animal(void);
		
		virtual void	makeSound(void) const;
			// Could have used a pure virtual function and made the Animal class abstract
			// We don't need an instance of Animal in this case. Just an Animal means nothing
			// But it's not the exercice, the main declare an instance of Animal

		std::string	getType(void) const;
		void		setType(std::string type);
};

#endif