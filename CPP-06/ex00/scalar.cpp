/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:42:30 by user42            #+#    #+#             */
/*   Updated: 2021/07/19 16:10:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

bool	isCharacter(char* const arg)
{
	std::string	argString = arg;

	if (argString.length() <= 1)
		return (true);
	else
		return (false);
}

bool	isInteger(char* const arg)
{
	char*	endPtr;
	strtol(arg, &endPtr, 10);
	if (*endPtr)
		return (false);
	else
		return (true);
}

bool	isFloat(char* const arg)
{
	char*	endPtr;
	strtof(arg, &endPtr);
	if (*endPtr == 'f' && *(endPtr + 1) == '\0')
		return (true);
	else
		return (false);
}

bool	isDouble(char* const arg)
{
	char*	endPtr;
	strtod(arg, &endPtr);
	if (*endPtr || isInteger(arg) || *(endPtr - 1) == '.')
		return (false);
	else
		return (true);
}

bool	isValid(char* const arg)
{
	std::string const literal = arg;

	if (literal[0] == ' ' || literal[literal.length() - 1] == ' ')
	{
		std::cout << "Literal expression is not valid" << std::endl;
		return (false);
	}

	else if (!isInteger(arg) && !isFloat(arg) && !isDouble(arg) && !isCharacter(arg))
	{
		std::cout << "Wrong literal type: expect <int> <float> <double> and <char>" << std::endl;
		return (false);
	}

	return (true);
}

bool	isNan(std::string literal)
{
	if (literal == "nan" || literal == "-nan" || literal == "nanf" || literal == "-nanf")
		return (true);
	else
		return (false);
}

bool	isInf(std::string literal)
{
	if (literal == "inf" || literal == "inff" || literal == "-inf" \
		|| literal == "-inff" || literal == "+inf" || literal == "+inff")
		return (true);
	else
		return (false);
}