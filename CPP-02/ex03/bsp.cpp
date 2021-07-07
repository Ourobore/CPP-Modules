/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:07:59 by user42            #+#    #+#             */
/*   Updated: 2021/07/07 10:30:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.hpp"

Fixed	getArea(Point const i, Point const j, Point const k) // Barycentric coordinates
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
	
	A = getArea(a, b, c);
	pab = getArea(point, a, b);
	pbc = getArea(point, b, c);
	pac = getArea(point, a, c);

	if (point.isOnLine(a, b) || point.isOnLine(a, c) || point.isOnLine(b, c))
		return (false);

	A.setAbs();
	pab.setAbs();
	pbc.setAbs();
	pac.setAbs();
	
	return (A == pab + pbc + pac);
}