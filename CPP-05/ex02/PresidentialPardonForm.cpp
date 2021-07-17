/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 21:09:55 by user42            #+#    #+#             */
/*   Updated: 2021/07/17 21:37:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureau.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) \
: Form("Order77", 25, 5), _target("President")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) \
: Form("Order77", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) \
: Form(rhs), _target(rhs.getTarget())
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) \
{
	if (this != &rhs)
		_target = rhs.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (_target);
}

void	PresidentialPardonForm::doAction(void) const
{
	std::cout << "<" << this->getTarget() << "> has been pardoned by Zafod Beeblebrox" << std::endl;
}