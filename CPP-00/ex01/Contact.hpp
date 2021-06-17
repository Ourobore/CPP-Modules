/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 10:12:05 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/17 15:42:42 by lchapren         ###   ########.fr       */
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

		void	_print_info(std::string info);

	public:
		void	add_contact(void);
		void	print_contact(void);
		void	display_summary(size_t index);
};

#endif
