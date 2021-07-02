/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:57:01 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/02 10:11:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.hpp"

Fixed::Fixed(void) : _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed&	Fixed::operator=(Fixed const &src)
{
	//std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
		this->getRawBits(src.getRawBits());

	return (*this);
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int raw)
{
	//std::cout << "setRawBits function called" << std::endl;
	this->_value = raw;
}