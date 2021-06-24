/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:56:59 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/24 14:57:16 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex05.hpp"

Human::Human(void)
{
}

Human::~Human(void)
{
}

std::string	Human::identify(void) const
{
	return (this->_brain.identify());
}

Brain	Human::getBrain() const
{
	return (this->_brain);
}