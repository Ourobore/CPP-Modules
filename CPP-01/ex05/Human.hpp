/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:50:33 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/24 16:28:28 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "ex05.hpp"

class Human
{
	private:
		std::string	_name;
		Brain		_brain;
	public:
		Human(void);
		~Human(void);
		std::string	identify(void) const;
		Brain const	getBrain(void);
};

#endif