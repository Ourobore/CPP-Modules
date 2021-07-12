/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:55:47 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/11 21:02:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include "cpp04.hpp"

class	Animal
{
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const &rhs);
		Animal& operator=(Animal const &rhs);
		virtual ~Animal(void);
		
		virtual void	makeSound(void) const;
			// Could have used a pure virtual function and made the Animal class abstract
			// We don't need an instance of Animal in this case. Just an Animal means nothing
			// But it's not the exercice, the main declare an instance of Animal

		std::string	getType(void) const;
		void		setType(std::string type);
};

#endif