/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:07:15 by user42            #+#    #+#             */
/*   Updated: 2021/07/07 10:41:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0))
{
    //std::cout << "Default constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y))
{
    //std::cout << "Float constructor called" << std::endl;
}

Point::Point(Point const &P) : _x(P._x), _y(P._y)
{
    //std::cout << "Copy constructor called" << std::endl;
}

Point::~Point(void)
{
    //std::cout << "Destructor called" << std::endl;
}

Point&	Point::operator=(Point const &src)
{
    // Can't implement it, can't assign to a const variable or drop const qualifier
    
    //std::cout << "Assignement operator called" << std::endl;
    if (this != &src)
    {
    }
    return (*this);
}

Fixed const	Point::getCoordX(void) const
{
    return (this->_x);
}

Fixed const	Point::getCoordY(void) const
{
    return (this->_y);
}

Fixed const	Point::getDistance(Point const &P) const
{
	float		distanceFloat = sqrt(pow(this->getCoordX().toFloat() - P.getCoordX().toFloat(), 2) \
								+ pow(this->getCoordY().toFloat() - P.getCoordY().toFloat(), 2));
	Fixed const distance(distanceFloat);
	return (distance);
}

bool		Point::isOnLine(Point const &A, Point const &B) const
{
	return (this->getDistance(A) + this->getDistance(B) == A.getDistance(B));
}

std::ostream&   operator<<(std::ostream &o, Point const &src)
{
    Fixed   x(src.getCoordX());
    Fixed   y(src.getCoordY());

    o << "<" << x << "," << y << ">";
    return (o);
}
