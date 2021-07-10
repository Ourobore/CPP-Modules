/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:09:00 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/10 14:12:41 by user42           ###   ########.fr       */
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
		~Cat(void);

		void	makeSound(void) const;
};

#endif