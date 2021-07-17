/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 21:07:38 by user42            #+#    #+#             */
/*   Updated: 2021/07/17 21:09:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "bureau.hpp"

class	PresidentialPardonForm : public Form
{
	private:
		std::string	_target;
		
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &rhs);
		PresidentialPardonForm& operator=(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm(void);

		std::string	getTarget(void) const;
		void doAction(void) const;
};

#endif