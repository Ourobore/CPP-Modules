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
	this->setFirstName(input);
	std::cout << "Please enter the contact last name: ";
	getline(std::cin, input);
	this->setLastName(input);
	std::cout << "Please enter the contact nickname: ";
	getline(std::cin, input);
	this->setNickname(input);
	std::cout << "Please enter the contact login: ";
	getline(std::cin, input);
	this->setLogin(input);
	std::cout << "Please enter the contact postal address: ";
	getline(std::cin, input);
	this->setPostalAddress(input);
	std::cout << "Please enter the contact email_address: ";
	getline(std::cin, input);
	this->setEmailAddress(input);
	std::cout << "Please enter the contact birthday date ";
	getline(std::cin, input);
	this->setBirthdayDate(input);
	std::cout << "Please enter the contact favorite meal: ";
	getline(std::cin, input);
	this->setFavoriteMeal(input);
	std::cout << "Please enter the contact underwear color: ";
	getline(std::cin, input);
	this->setUnderwearColor(input);
	std::cout << "Please enter the contact darkest secret: ";
	getline(std::cin, input);
	this->setDarkestSecret(input);
	std::cout << "Contact added in the phonebook." << std::endl;
}

void	Contact::print_contact(void) const
{
	std::cout << "This is the contact info." << std::endl;
	std::cout << "First Name: " << this->getFirstName() << std::endl;
	std::cout << "Last Name: " << this->getLastName() << std::endl;
	std::cout << "Nickname: " << this->getNickname() << std::endl;
	std::cout << "Login: " << this->getLogin() << std::endl;
	std::cout << "Postal Address: " << this->getPostalAddress() << std::endl;
	std::cout << "Email Address: " << this->getEmailAddress() << std::endl;
	std::cout << "Birthday Date: " << this->getBirthdayDate() << std::endl;
	std::cout << "Favorite Meal: " << this->getFavoriteMeal() << std::endl;
	std::cout << "Underwear Color: " << this->getUnderwearColor() << std::endl;
	std::cout << "Darkest Secret: " << this->getDarkestSecret() << std::endl;
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

std::string	Contact::getFirstName(void) const
{
	return (this->_first_name);
}

std::string	Contact::getLastName(void) const
{
	return (this->_last_name);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::getLogin(void) const
{
	return (this->_login);
}

std::string	Contact::getPostalAddress(void) const
{
	return (this->_postal_address);
}

std::string	Contact::getEmailAddress(void) const
{
	return (this->_email_address);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phone_number);
}

std::string	Contact::getBirthdayDate(void) const
{
	return (this->_birthday_date);
}

std::string	Contact::getFavoriteMeal(void) const
{
	return (this->_favorite_meal);
}

std::string	Contact::getUnderwearColor(void) const
{
	return (this->_underwear_color);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkest_secret);
}

void	Contact::setFirstName(std::string value)
{
	this->_first_name = value;
}

void	Contact::setLastName(std::string value)
{
	this->_last_name = value;
}

void	Contact::setNickname(std::string value)
{
	this->_nickname = value;
}

void	Contact::setLogin(std::string value)
{
	this->_login = value;
}

void	Contact::setPostalAddress(std::string value)
{
	this->_postal_address = value;
}

void	Contact::setEmailAddress(std::string value)
{
	this->_email_address = value;
}

void	Contact::setPhoneNumber(std::string value)
{
	this->_phone_number = value;
}

void	Contact::setBirthdayDate(std::string value)
{
	this->_birthday_date = value;
}

void	Contact::setFavoriteMeal(std::string value)
{
	this->_favorite_meal = value;
}

void	Contact::setUnderwearColor(std::string value)
{
	this->_underwear_color = value;
}

void	Contact::setDarkestSecret(std::string value)
{
	this->_darkest_secret = value;
}
