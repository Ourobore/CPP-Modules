/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:07:15 by user42            #+#    #+#             */
/*   Updated: 2021/07/06 16:31:32 by lchapren         ###   ########.fr       */
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

Point::Point(Point const &P)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = P;
}

Point::~Point(void)
{
    //std::cout << "Destructor called" << std::endl;
}

Point&  Point::operator=(Point const &src)
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

std::ostream&   operator<<(std::ostream &o, Point const &src)
{
    Fixed   x(src.getCoordX());
    Fixed   y(src.getCoordY());

    o << "<" << x << "," << y << ">";
    return (o);
}
