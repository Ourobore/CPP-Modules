/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:28:25 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/09 15:39:21 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "cpp04.hpp"

class Brain
{
	protected:
		std::string *_ideas;

	public:
		Brain(void);
		Brain(Brain const &rhs);
		Brain& operator=(Brain const &rhs);
		~Brain(void);

		std::string*	getIdeas(void) const;
		void			setIdeas(std::string *ideas);
};

#endif