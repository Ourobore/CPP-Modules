/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:36:17 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/17 12:09:51 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "phonebook.hpp"

std::string	get_valid_input(void)
{
	std::string input;
	
	while (1)
	{
		std::cout << "Please enter your command (ADD, SEARCH or EXIT) : ";
		getline(std::cin, input);
		if (input == "ADD")
			return (input);
		else if (input == "SEARCH")
			return (input);
		else if (input == "EXIT")
			return (input);
		else
			std::cout << "Input not valid." << std::endl;
	}
}

int	main()
{
	Contact		phonebook[8];
	std::string	command;
	size_t		nb_contact;

	command = "";
	nb_contact = 0;
	while (command != "EXIT")
	{
		command = get_valid_input();
		if (command == "ADD")
		{
			if (nb_contact < 8)
			{
				phonebook[nb_contact].get_contact();
				nb_contact++;
			}
			else
				std::cout << "Can't add anymore contacts. Phonebook is full" << std::endl;
		}
		else if (command == "SEARCH")
		{

		}
		else if (command == "EXIT")
			break ;
	}
	return (0);
}