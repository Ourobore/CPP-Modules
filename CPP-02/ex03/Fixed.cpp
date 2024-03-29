/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:57:01 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/07 08:17:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.hpp"

const int	Fixed::_nbBits = 8;

Fixed::Fixed(void) : _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const integer)
{
	//std::cout << "Int constructor called" << std::endl;
	this->setRawBits(integer * (1 << this->_nbBits));
}

Fixed::Fixed(float const floating)
{
	//std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(floating * (1 << this->_nbBits)));
}

Fixed::Fixed(Fixed const &copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

//
// Assignation operators overload
//
Fixed&	Fixed::operator=(Fixed const &src)
{
	//std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
		this->setRawBits(src.getRawBits());
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &src) const
{
	//std::cout << "Sum operator called" << std::endl;
	return Fixed(this->toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(Fixed const &src) const
{
	//std::cout << "Difference operator called" << std::endl;
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(Fixed const &src) const
{
	//std::cout << "Multipcation operator called" << std::endl;
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(Fixed const &src) const
{
	//std::cout << "Division operator called" << std::endl;
	return Fixed(this->toFloat() / src.toFloat());
}


//
// Comparison operators overload
//
bool	Fixed::operator>(Fixed const &comp) const
{
	//std::cout << "Superior comparison called" << std::endl;
	return (this->_value > comp.getRawBits());
}

bool	Fixed::operator<(Fixed const &comp) const
{
	//std::cout << "Inferior comparison called" << std::endl;
	return (this->_value < comp.getRawBits());
}

bool	Fixed::operator>=(Fixed const &comp) const
{
	//std::cout << "Superior or equal comparison called" << std::endl;
	return (this->_value >= comp.getRawBits());
}

bool	Fixed::operator<=(Fixed const &comp) const
{
	//std::cout << "Inferior or equal comparison called" << std::endl;
	return (this->_value <= comp.getRawBits());
}

bool	Fixed::operator==(Fixed const &comp) const
{
	//std::cout << "Equal comparison called" << std::endl;
	return (this->_value == comp.getRawBits());
}

bool	Fixed::operator!=(Fixed const &comp) const
{
	//std::cout << "Not equal comparison called" << std::endl;
	return (this->_value != comp.getRawBits());
}


//
// Increment and decrement operator overload
//
Fixed	Fixed::operator++()
{
	//std::cout << "Pre increment operator called" << std::endl;
	Fixed	preInc;

	preInc._value = ++_value;
	return (preInc);
}

Fixed	Fixed::operator++(int)
{
	//std::cout << "Post increment operator called" << std::endl;
	Fixed	postInc;

	postInc._value = _value++;
	return (postInc);
}

Fixed	Fixed::operator--()
{
	//std::cout << "Pre decrement operator called" << std::endl;
	Fixed	preDec;

	preDec._value = --_value;
	return (preDec);
}

Fixed	Fixed::operator--(int)
{
	//std::cout << "Post decrement operator called" << std::endl;
	Fixed	postDec;

	postDec._value = _value--;
	return (postDec);
}


//
// Min / Max functions and overload
//
Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int		Fixed::toInt(void) const
{
	//std::cout << "toInt() function called" << std::endl;
	return (this->getRawBits() / (1 << this->_nbBits));
}

float		Fixed::toFloat(void) const
{
	//std::cout << "toFloat() function called" << std::endl;
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

void	Fixed::setAbs(void)
{
	if (this->getRawBits() < 0)
		this->setRawBits(this->getRawBits() * -1);
}

std::ostream& operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return (o);
}