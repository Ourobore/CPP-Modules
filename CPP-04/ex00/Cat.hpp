/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:09:00 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/09 15:09:20 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "ex00.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &rhs);
		Cat& operator=(Cat const &rhs);
		~Cat(void);

		void	makeSound(void) const;
};

#endif