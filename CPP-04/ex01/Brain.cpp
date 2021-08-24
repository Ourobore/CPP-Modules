/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:29:29 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/24 10:49:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp04.hpp"

Brain::Brain(void) : _ideas(new std::string[100])
{
	std::cout << "Constructor: Brain" << std::endl;
}

Brain::Brain(Brain const &rhs) : _ideas(new std::string[100])
{
	std::cout << "Copy constructor: Brain" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i]; 
}

Brain&	Brain::operator=(Brain const &rhs)
{
	std::cout << "Assignement overload: Brain" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
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