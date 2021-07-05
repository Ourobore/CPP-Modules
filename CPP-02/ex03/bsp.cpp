/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:07:59 by user42            #+#    #+#             */
/*   Updated: 2021/07/05 19:18:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.hpp"

Fixed	getArea(Point const i, Point const j, Point const k)
{
	Fixed A;

	A + (i.getCoordX() * (j.getCoordY() - k.getCoordY()) \
	+ j.getCoordX() * (j.getCoordY() - i.getCoordY()) \
	+ k.getCoordX() * (i.getCoordY() - j.getCoordY()));
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

	return (A == pab + pbc + pac);
}