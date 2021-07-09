/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:36:22 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/09 15:27:08 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "cpp04.hpp"

class	WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const &rhs);
		WrongAnimal& operator=(WrongAnimal const &rhs);
		~WrongAnimal(void);
		
		void	makeSound(void) const;

		std::string	getType(void) const;
		void		setType(std::string type);
};

#endif