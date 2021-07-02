/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:57:01 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/02 10:51:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.hpp"

const int	Fixed::_nbBits = 8;

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(integer * (1 << this->_nbBits));
}

Fixed::Fixed(float const floating)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(floating * (1 << this->_nbBits)));
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
		this->setRawBits(src.getRawBits());
	return (*this);
}

int		Fixed::toInt(void) const
{
	//std::cout << "toInt() function called" << std::endl;
	return (this->getRawBits() / (1 << this->_nbBits));
}

float		Fixed::toFloat(void) const
{
	//std::cout << "toInt() function called" << std::endl;
	return ((float)this->getRawBits() / (1 << this->_nbBits));
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits() function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int raw)
{
	//std::cout << "setRawBits() function called" << std::endl;
	this->_value = raw;
}

std::ostream& operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return (o);
}