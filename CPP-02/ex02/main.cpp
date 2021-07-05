/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:57:09 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/05 14:28:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.hpp"

int	main()
{
	// Increment and decrement overload tests
	Fixed	a(0);
	
	std::cout << "Increment and decrement tests" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl;
	
	// Min max tests
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << b << std::endl;
	
	std::cout << std::endl;

	//Comparison overload tests
	Fixed	x(5);
	Fixed	y(3);

	std::cout << "Comparisons tests" << std::endl;
	std::cout << "x: " << x.toFloat() << " | y: " << y.toFloat() << std::endl;
	if (x < y)
		std::cout << "x is inferior to y y" << std::endl;
	else
		std::cout << "x is not inferior to y " << std::endl;

	if (x > y)
		std::cout << "x is superior to y" << std::endl;
	else
		std::cout << "x is not superior to y" << std::endl;

	if (x <= y)
		std::cout << "x is inferior or equal to y" << std::endl;
	else
		std::cout << "x is not inferior or equal to y" << std::endl;

	if (x >= y)
		std::cout << "x is superior or equal to y" << std::endl;
	else
		std::cout << "x is not superior or equal to y" << std::endl;

	if (x == y)
		std::cout << "x is equal to y" << std::endl;
	else
		std::cout << "x is not equal to y" << std::endl;
		
	if (x != y)
		std::cout << "x is different to y" << std::endl;
	else
		std::cout << "x is not different to y" << std::endl;

	std::cout << std::endl;

	//Assignation operators
	int		n1 = 3;
	int		n2 = 6;

	std::cout << "Assignation tests" << std::endl;
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
}
