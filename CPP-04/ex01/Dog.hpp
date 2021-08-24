/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:31:27 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/24 09:56:49 by user42           ###   ########.fr       */
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
		virtual ~Dog(void);

		void	makeSound(void) const;
		Brain*	getBrain(void) const;
};

#endif