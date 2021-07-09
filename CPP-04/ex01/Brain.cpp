/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:29:29 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/09 15:44:39 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp04.hpp"

Brain::Brain(void) : _ideas(new std::string[100])
{
	std::cout << "Constructor: Brain" << std::endl;
}

Brain::Brain(Brain const &rhs)
{
	*this = rhs;
}

Brain&	Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
		this->setIdeas(rhs.getIdeas());
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Destructor: Brain" << std::endl;
	delete [] this->_ideas;
}

std::string*	Brain::getIdeas(void) const
{
	return (this->_ideas);
}

void			Brain::setIdeas(std::string *ideas)
{
	this->_ideas = ideas;
}