/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:42:30 by user42            #+#    #+#             */
/*   Updated: 2021/07/19 10:36:23 by user42           ###   ########.fr       */
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
