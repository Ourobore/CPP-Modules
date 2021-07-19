/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 14:05:01 by user42            #+#    #+#             */
/*   Updated: 2021/07/19 10:40:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

void	printInteger(char* const arg)
{
	(void)arg;
	std::cout << "Arg is Integer" << std::endl;
}

void	printFloat(char* const arg)
{
	(void)arg;
	std::cout << "Arg is Float" << std::endl;
}

void	printDouble(char* const arg)
{
	(void)arg;
	std::cout << "Arg is Double" << std::endl;
}

void	printCharacter(char* const arg)
{
	(void)arg;
	std::cout << "Arg is Character" << std::endl;
}


int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error. './scalar argument' expected" << std::endl;
		return (1);
	}

	if (isInteger(argv[1]))
		printInteger(argv[1]);

	else if (isFloat(argv[1]))
		printFloat(argv[1]);
		
	else if (isDouble(argv[1]))
		printDouble(argv[1]);

	else if (isCharacter(argv[1]))
		printCharacter(argv[1]);
	
	else
		std::cout << "Wrong litteral type: expect <int> <float> <double> and <char>" << std::endl;
}