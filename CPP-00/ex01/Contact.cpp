/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 10:12:00 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/22 10:03:38 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::add_contact(void)
{
	std::string input;

	std::cout << "You chose to enter a new contact." << std::endl;
	std::cout << "Please enter the contact first name: ";
	getline(std::cin, input);
	this->_first_name = input;
	std::cout << "Please enter the contact last name: ";
	getline(std::cin, input);
	this->_last_name = input;
	std::cout << "Please enter the contact nickname: ";
	getline(std::cin, input);
	this->_nickname = input;
	std::cout << "Please enter the contact login: ";
	getline(std::cin, input);
	this->_login = input;
	std::cout << "Please enter the contact postal address: ";
	getline(std::cin, input);
	this->_postal_address = input;
	std::cout << "Please enter the contact email_address: ";
	getline(std::cin, input);
	this->_email_address = input;
	std::cout << "Please enter the contact birthday date ";
	getline(std::cin, input);
	this->_birthday_date = input;
	std::cout << "Please enter the contact favorite meal: ";
	getline(std::cin, input);
	this->_favorite_meal = input;
	std::cout << "Please enter the contact underwear color: ";
	getline(std::cin, input);
	this->_underwear_color = input;
	std::cout << "Please enter the contact darkest secret: ";
	getline(std::cin, input);
	this->_darkest_secret = input;
	std::cout << "Contact added in the phonebook." << std::endl;
}

void	Contact::print_contact(void) const
{
	std::cout << "This is the contact info." << std::endl;
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Postal Address: " << this->_postal_address << std::endl;
	std::cout << "Email Address: " << this->_email_address << std::endl;
	std::cout << "Birthdat Date: " << this->_birthday_date << std::endl;
	std::cout << "Favorite Meal: " << this->_favorite_meal << std::endl;
	std::cout << "Underwear Color: " << this->_underwear_color << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
}

void	Contact::_print_info(std::string info) const
{
	if (info.length() > 9)
		std::cout << info.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << info;
	std::cout << "|";
}

void	Contact::display_summary(size_t index) const
{
	std::cout << std::setw(10) << "[" << index + 1 << "]" << "|";
	this->_print_info(this->_first_name);
	this->_print_info(this->_last_name);
	this->_print_info(this->_nickname);
	std::cout << std::endl;
}
