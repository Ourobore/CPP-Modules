/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:07:59 by user42            #+#    #+#             */
/*   Updated: 2021/07/06 21:47:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.hpp"

Fixed	getArea(Point const i, Point const j, Point const k)
{
	Fixed A((i.getCoordX() * (j.getCoordY() - k.getCoordY()) \
	+ j.getCoordX() * (k.getCoordY() - i.getCoordY()) \
	+ k.getCoordX() * (i.getCoordY() - j.getCoordY())) / Fixed(2));
	return (A);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	A;
	Fixed	pab;
	Fixed	pbc;
	Fixed	pac;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << point << std::endl;
	std::cout << std::endl;
	
	A = getArea(a, b, c);
	pab = getArea(point, a, b);
	pbc = getArea(point, b, c);
	pac = getArea(point, a, c);

	std::cout << A << std::endl;
	std::cout << pab << std::endl;
	std::cout << pbc << std::endl;
	std::cout << pac << std::endl;

	A.setAbs();
	pab.setAbs();
	pbc.setAbs();
	pac.setAbs();
	
	return (A == pab + pbc + pac);
}