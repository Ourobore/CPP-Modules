/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 11:23:48 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/30 12:29:01 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complain.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void	Karen::_debug(void) const
{
	std::cout << "'I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!'" << std::endl;
}

void	Karen::_info(void) const
{
	std::cout << "'I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!'" << std::endl;
}

void	Karen::_warning(void) const
{
	std::cout << "'I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.'" << std::endl;
}

void	Karen::_error(void) const
{
	std::cout << "'This is unacceptable, I want to speak to the manager now.'" << std::endl;
}

void	Karen::complain(std::string level) const
{
	/*
	typedef void (*f) (void);

	static f fTab[] = 	{
						this->_debug(),
						this->_
	}
	f[0] = this->_debug();
	f[1] = this->_info();
	f[2] = this->_warning();
	f[3] = this->_error();
	*/

	void (*f[]) (void) = {this->_debug};
}