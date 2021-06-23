/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 10:12:05 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/22 10:03:50 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "phonebook.hpp"

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _login;
		std::string _postal_address;
		std::string _email_address;
		std::string	_phone_number;
		std::string _birthday_date;
		std::string	_favorite_meal;
		std::string _underwear_color;
		std::string _darkest_secret;

		void	_print_info(std::string info) const;

	public:
		void		add_contact(void);
		void		print_contact(void) const;
		void		display_summary(size_t index) const;
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getLogin(void) const;
		std::string	getPostalAddress(void) const;
		std::string	getEmailAddress(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getBirthdayDate(void) const;
		std::string	getFavoriteMeal(void) const;
		std::string	getUnderwearColor(void) const;
		std::string	getDarkestSecret(void) const;
		void		setFirstName(std::string value);
		void		setLastName(std::string value);
		void		setNickname(std::string value);
		void		setLogin(std::string value);
		void		setPostalAddress(std::string value);
		void		setEmailAddress(std::string value);
		void		setPhoneNumber(std::string value);
		void		setBirthdayDate(std::string value);
		void		setFavoriteMeal(std::string value);
		void		setUnderwearColor(std::string value);
		void		setDarkestSecret(std::string value);
};

#endif
