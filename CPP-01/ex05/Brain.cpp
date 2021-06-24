/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:17:29 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/24 15:08:04 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex05.hpp"

Brain::Brain(void)
{
}

Brain::~Brain(void)
{
}

std::string	Brain::identify() const
{
	return ((std::string)this);
}