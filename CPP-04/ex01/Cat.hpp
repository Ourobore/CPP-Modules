/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:09:00 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/24 09:56:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "cpp04.hpp"

class Cat : public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat(void);
		Cat(Cat const &rhs);
		Cat& operator=(Cat const &rhs);
		virtual ~Cat(void);

		void	makeSound(void) const;
		Brain*	getBrain(void) const;
};

#endif