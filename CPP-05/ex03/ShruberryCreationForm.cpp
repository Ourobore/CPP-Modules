/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:06:43 by user42            #+#    #+#             */
/*   Updated: 2021/07/17 21:48:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureau.hpp"

ShruberryCreationForm::ShruberryCreationForm(void) \
: Form("Order55", 145, 137), _target("President")
{
}

ShruberryCreationForm::ShruberryCreationForm(std::string const &target) \
: Form("Order55", 145, 137), _target(target)
{
}

ShruberryCreationForm::ShruberryCreationForm(ShruberryCreationForm const &rhs) \
: Form(rhs), _target(rhs.getTarget())
{
}

ShruberryCreationForm& ShruberryCreationForm::operator=(ShruberryCreationForm const &rhs) \
{
	if (this != &rhs)
		_target = rhs.getTarget();
	return (*this);
}

ShruberryCreationForm::~ShruberryCreationForm(void)
{
}

std::string ShruberryCreationForm::getTarget(void) const
{
	return (_target);
}

void	ShruberryCreationForm::doAction(void) const
{
	std::string filename = this->getTarget() + "_shruberry";
	std::ofstream o(filename.c_str());

	o << "    _\\/_" << std::endl;
	o << "     /\\" << std::endl;
	o << "     /\\" << std::endl;
	o << "    /  \\" << std::endl;
	o << "   /~~*~\\o" << std::endl;
	o << "   /o   \\" << std::endl;
	o << "  /~~*~~~\\" << std::endl;
	o << " o/    o \\" << std::endl;
	o << " /~~~~~~~~\\" << std::endl;
	o << "/__*_______\\" << std::endl;
	o << "     ||" << std::endl;
	o << "   \\====/" << std::endl;
	o << "    \\__/";

	o.close();
}