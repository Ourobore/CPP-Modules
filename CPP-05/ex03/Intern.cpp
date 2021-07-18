/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 08:25:08 by user42            #+#    #+#             */
/*   Updated: 2021/07/18 09:06:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureau.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern const &rhs)
{
	(void)rhs;
}

Intern& Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Intern::~Intern(void)
{
}

Form*	Intern::_makeShruberry(std::string const &target) const
{
	return (new ShruberryCreationForm(target));
}

Form*	Intern::_makeRobotomy(std::string const &target) const
{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::_makePardon(std::string const &target) const
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm(std::string const &formName, std::string const &target) const
{
	std::string const formNames[] = 
						{
							"shruberry creation",
							"robotomy request",
							"presidential pardon"
						};

	typedef Form* (Intern::*formType) (std::string const &target) const;

	formType const formTypes[] = 
						{
							&Intern::_makeShruberry,
							&Intern::_makeRobotomy,
							&Intern::_makePardon
						};

	for (int i = 0; i < 3 ; i++)
	{
		if (formNames[i] == formName)
		{
			Form*		form;
			form = (this->*formTypes[i])(target);
			std::cout << "Intern creates <" << form->getName() << ">, " << formNames[i] << std::endl;
			return (form);
		}
	}
	std::cout << "Error: Form creation failed, form type <" << formName << "> unknown" << std::endl;
	return (NULL);
}