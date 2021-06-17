/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 10:12:00 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/17 12:13:42 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::get_contact(void)
{
	std::string input;

	std::cout << "You chose to enter a new contact." << std::endl;
	std::cout << "Please enter the contact first name: ";
	getline(std::cin, input);
	this->_first_name = input;
	//std::cout << std::endl;
	std::cout << "Please enter the contact last name: ";
	getline(std::cin, input);
	this->_last_name = input;
	//std::cout << std::endl;
	std::cout << "Please enter the contact nickname: ";
	getline(std::cin, input);
	this->_nickname = input;
	//std::cout << std::endl;
	std::cout << "Please enter the contact login: ";
	getline(std::cin, input);
	this->_login = input;
	//std::cout << std::endl;
	std::cout << "Please enter the contact postal address: ";
	getline(std::cin, input);
	this->_postal_address = input;
	//std::cout << std::endl;
	std::cout << "Please enter the contact email_address: ";
	getline(std::cin, input);
	this->_email_address = input;
	//std::cout << std::endl;
	std::cout << "Please enter the contact birthday date ";
	getline(std::cin, input);
	this->_birthday_date = input;
	//std::cout << std::endl;
	std::cout << "Please enter the contact favorite meal: ";
	getline(std::cin, input);
	this->_favorite_meal = input;
	//std::cout << std::endl;
	std::cout << "Please enter the contact underwear color: ";
	getline(std::cin, input);
	this->_underwear_color = input;
	//std::cout << std::endl;
	std::cout << "Please enter the contact darkest secret: ";
	getline(std::cin, input);
	this->_darkest_secret = input;
	//std::cout << std::endl;
}
