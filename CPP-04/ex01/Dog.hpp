/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:31:27 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/12 11:06:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "cpp04.hpp"

class Dog : public Animal
{
	private:
		Brain*	_brain;
		
	public:
		Dog(void);
		Dog(Dog const &rhs);
		Dog& operator=(Dog const &rhs);
		~Dog(void);

		void	makeSound(void) const;
		Brain*	getBrain(void) const;
};

#endif