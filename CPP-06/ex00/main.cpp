/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 14:05:01 by user42            #+#    #+#             */
/*   Updated: 2021/07/19 16:01:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

void	printInteger(char* const arg)
{
	long int	conv;
	conv = strtol(arg, NULL, 10);

	// Char conv
	if (conv < 32 || conv > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(conv) << "'" << std::endl;

	// Int conv
	if (conv < INT_MIN || conv > INT_MAX)
		std::cout << "int: Overflowing" << std::endl;
	else
		std::cout << "int: '" << static_cast<int>(conv) << "'" << std::endl;

	// Float conv
	if (conv < -HUGE_VALF || conv > HUGE_VALF)
		std::cout << "float: Overflowing" << std::endl;
	else
		std::cout << "float: '" << static_cast<float>(conv) << ".0f'" << std::endl;

	// Double conv
	if (conv < -HUGE_VAL || conv > HUGE_VAL)
		std::cout << "double: Overflowing" << std::endl;
	else
		std::cout << "double: '" << static_cast<double>(conv) << ".0'" << std::endl;
}

void	printFloat(char* const arg)
{
	float	conv;
	conv = strtof(arg, NULL);
	
	// Char conv
	if (isNan(arg))
		std::cout << "char: Impossible" << std::endl;
	else if (conv < 32 || conv > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(conv) << "'" << std::endl;

	// Int conv
	if (isNan(arg))
		std::cout << "char: Impossible" << std::endl;
	else if (conv < INT_MIN || conv > INT_MAX)
		std::cout << "int: Overflowing" << std::endl;
	else
		std::cout << "int: '" << static_cast<int>(conv) << "'" << std::endl;

	// Float conv
	if (conv <= -HUGE_VALF || conv >= HUGE_VALF)
		std::cout << "float: Overflowing" << std::endl;
	else
	{
		if (conv == static_cast<int>(conv))
			std::cout << "float: '" << conv << ".0f'" << std::endl;
		else
			std::cout << "float: '" << conv << "f'" << std::endl;
	}

	// Double conv
	if (conv <= -HUGE_VAL || conv >= HUGE_VAL)
		std::cout << "double: Overflowing" << std::endl;
	else
	{
		if (conv == static_cast<int>(conv))
			std::cout << "double: '" << static_cast<double>(conv) << ".0'" << std::endl;
		else
			std::cout << "double: '" << static_cast<double>(conv) << std::endl;
	}
}

void	printDouble(char* const arg)
{
	double	conv;
	conv = strtod(arg, NULL);
	
	// Char conv
	if (isNan(arg))
		std::cout << "char: Impossible" << std::endl;
	else if (conv < 32 || conv > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(conv) << "'" << std::endl;

	// Int conv
	if (isNan(arg))
		std::cout << "char: Impossible" << std::endl;
	else if (conv < INT_MIN || conv > INT_MAX)
		std::cout << "int: Overflowing" << std::endl;
	else
		std::cout << "int: '" << static_cast<int>(conv) << "'" << std::endl;

	// Float conv
	if (conv <= -HUGE_VALF || conv >= HUGE_VALF)
		std::cout << "float: Overflowing" << std::endl;
	else
	{
		if (conv == static_cast<int>(conv))
			std::cout << "float: '" << static_cast<float>(conv) << ".0f'" << std::endl;
		else
			std::cout << "float: '" << static_cast<float>(conv) << "f'" << std::endl;
	}

	// Double conv
	if (conv <= -HUGE_VAL || conv >= HUGE_VAL)
		std::cout << "double: Overflowing" << std::endl;
	else
	{
		if (conv == static_cast<int>(conv))
			std::cout << "double: '" << conv << ".0'" << std::endl;
		else
			std::cout << "double: '" << conv << std::endl;
	}
}

void	printCharacter(char* const arg)
{
	char	c = arg[0];

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: '" << static_cast<int>(c) << "'" << std::endl;
	std::cout << "float: '" << static_cast<float>(c) << ".0f'" << std::endl;
	std::cout << "double: '" << static_cast<double>(c) << ".0'" << std::endl;
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error: one argument expected: './scalar argument'" << std::endl;
		return (1);
	}

	std::cout << "VERIF TO DELETE: " << std::endl;
	std::cout << isInteger(argv[1]) << std::endl;
	std::cout << isFloat(argv[1]) << std::endl;
	std::cout << isDouble(argv[1]) << std::endl;
	/*
	std::cout << INT_MIN << std::endl;
	std::cout << INT_MAX << std::endl;
	std::cout << HUGE_VALF << std::endl;
	std::cout << -HUGE_VALF << std::endl;
	std::cout << HUGE_VAL << std::endl;
	std::cout << -HUGE_VAL << std::endl;
	std::cout << std::endl;
	std::cout << FLOAT_MIN << std::endl;
	std::cout << FLOAT_MAX << std::endl;
	std::cout << DOUBLE_MIN << std::endl;
	std::cout << DOUBLE_MAX << std::endl;
	std::cout << std::endl;
	std::cout << &nan << std::endl;
	std::cout << &nanf << std::endl;
*/
	if (!isValid(argv[1]))
		return (1);

	if (isInteger(argv[1]))
		printInteger(argv[1]);

	else if (isFloat(argv[1]))
		printFloat(argv[1]);
		
	else if (isDouble(argv[1]))
		printDouble(argv[1]);

	else if (isCharacter(argv[1]))
		printCharacter(argv[1]);

	return (0);
}