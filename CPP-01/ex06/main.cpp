/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 11:28:29 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/30 14:41:28 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complain.hpp"

static std::string	Level[] =
							{
								"DEBUG",
								"INFO",
								"WARNING",
								"ERROR"
							};

int	resolveLevel(std::string level)
{
	for (int i = 0; !Level[i].empty(); i++)
	{
		if (level == Level[i])
			return (i);
	}
	return (-1);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments, expected 1" << std::endl;
		return (1);
	}

	Karen K;
	std::string	level = argv[1];
	int	levelIndex = resolveLevel(level);
	
	switch (levelIndex)
	{
		case (0):
				std::cout << "[" << Level[0] << "]" << std::endl;
				K.complain(Level[0]);
				std::cout << std::endl;
				
		case (1):
				std::cout << "[" << Level[1] << "]" << std::endl;
				K.complain(Level[1]);
				std::cout << std::endl;

		case (2):
				std::cout << "[" << Level[2] << "]" << std::endl;
				K.complain(Level[2]);
				std::cout << std::endl;

		case (3):
				std::cout << "[" << Level[3] << "]" << std::endl;
				K.complain(Level[3]);
				break ;
				
		default:
			std::cout << "[Probably complaining about insignificant problems]" << std::endl;
	}
}