/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:55:47 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/09 14:29:27 by lchapren         ###   ########.fr       */
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

		std::string	getType(void) const;
		void		setType(std::string type);
};

#endif