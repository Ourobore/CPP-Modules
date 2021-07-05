/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:57:09 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/05 11:37:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.hpp"

int	main()
{
	Fixed	a(5);
	Fixed const	b(35);

	std::cout << std::endl;

	//Comparison overload tests
	Fixed	x(5);
	Fixed	y(3);

	if (x < y)
		std::cout << "x < y" << std::endl;
	else
		std::cout << "x is not inferior to y " << std::endl;

	if (x > y)
		std::cout << "x > y" << std::endl;
	else
		std::cout << "x is not superior to y" << std::endl;

	if (x <= y)
		std::cout << "x <= y" << std::endl;
	else
		std::cout << "x > y" << std::endl;

	if (x >= y)
		std::cout << "x >= y" << std::endl;
	else
		std::cout << "x < y" << std::endl;

	if (x == y)
		std::cout << "x == y" << std::endl;
	else
		std::cout << "x != y" << std::endl;
		
	if (x != y)
		std::cout << "x != y" << std::endl;
	else
		std::cout << "x == y" << std::endl;

	std::cout << std::endl;

	//Assignation operators
	int		n1 = 3;
	int		n2 = 6;

	Fixed	resultConstructPlus(Fixed(n1) + Fixed(n2));
	Fixed	Plus1(n1);
	Fixed	Plus2(n2);
	std::cout << "resultPlus: " << Plus1 + Plus2 << std::endl;
	std::cout << "resultConstructPlus: " << resultConstructPlus << std::endl;

	Fixed	resultConstructMinus(Fixed(n1) - Fixed(n2));
	Fixed	Minus1(n1);
	Fixed	Minus2(n2);
	std::cout << "resultMinus: " << Minus1 - Minus2 << std::endl;
	std::cout << "resultConstructMinus: " << resultConstructMinus << std::endl;

	Fixed	resultConstructMult(Fixed(n1) * Fixed(n2));
	Fixed	Mult1(n1);
	Fixed	Mult2(n2);
	std::cout << "resultMult: " << Mult1 * Mult2 << std::endl;
	std::cout << "resultConstructMult: " << resultConstructMult << std::endl;

	Fixed	resultConstructDiv(Fixed(n1) / Fixed(n2));
	Fixed	Div1(n1);
	Fixed	Div2(n2);
	std::cout << "resultDiv: " << Div1 / Div2 << std::endl;
	std::cout << "resultConstructDiv: " << resultConstructDiv << std::endl;
	
	std::cout << std::endl;
}