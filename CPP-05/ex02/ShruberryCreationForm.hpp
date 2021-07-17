/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 17:52:24 by user42            #+#    #+#             */
/*   Updated: 2021/07/17 18:31:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

# include "bureau.hpp"

class	ShruberryCreationForm : public Form
{
	std::string	_target;

	public:
		ShruberryCreationForm(void);
		ShruberryCreationForm(ShruberryCreationForm const &rhs);
		ShruberryCreationForm& operator=(ShruberryCreationForm const &rhs);
		~ShruberryCreationForm(void);

		std::string getTarget(void) const;
		void doAction(void) const;
};

#endif