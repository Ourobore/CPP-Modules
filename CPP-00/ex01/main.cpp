/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:36:17 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/16 14:49:16 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	get_valid_input(void)
{
	char	input[7];
	
	while (1)
	{
		std::cout << "Please enter your command: ADD, SEARCH or EXIT." << std::endl;
		std::cin >> input;
		if (strcmp(input, "ADD") == 0)
			return (1);
		else if (strcmp(input, "SEARCH") == 0)
			return (2);
		else if (strcmp(input, "EXIT") == 0)
			return (3);
		else
			std::cout << "Input not valid." << std::endl;
	}
}

int	main()
{
	int command;

	command = get_valid_input();
	std::cout << "Return: " << command << std::endl;
	if (command == 3)
		return (0);
	return (0);
}