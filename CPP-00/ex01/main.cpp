/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:36:17 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/19 12:51:24 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	main(void)
{
	Contact		phonebook[8];
	size_t		nb_contact;
	std::string	command;

	command = "";
	nb_contact = 0;
	while (command != "EXIT")
	{
		command = get_valid_input();
		if (command == "ADD")
		{
			if (nb_contact < 8)
			{
				phonebook[nb_contact].add_contact();
				nb_contact++;
			}
			else
			std::cout << "Can't add anymore contacts. Phonebook is full." << std::endl;
		}
		else if (command == "SEARCH")
		{
			std::string	input;
			size_t		index;

			if (nb_contact == 0)
				std::cout << "There is no contact in the phonebook." << std::endl;
			else
			{
				for (size_t i = 0; i < nb_contact; i++)
					phonebook[i].display_summary(i);
				std::cout << "Select contact index: ";
				getline(std::cin, input);
				if (input.length() != 1)
					std::cout << "Input is not valid." << std::endl;
				else
				{
					index = (size_t)(input.at(0) - 48);
					if (index < 1 || index > nb_contact)
						std::cout << "Contact index is not valid." << std::endl;
					else
						phonebook[index - 1].print_contact();
				}
			}
		}
		else if (command == "EXIT")
			break ;
	}
	return (0);
}
