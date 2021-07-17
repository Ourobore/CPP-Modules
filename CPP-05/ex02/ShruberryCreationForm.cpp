/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:06:43 by user42            #+#    #+#             */
/*   Updated: 2021/07/17 18:31:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureau.cpp"

ShruberryCreationForm::ShruberryCreationForm(void) \
: Form("Order66", 145, 137), _target("President")
{
}

ShruberryCreationForm::ShruberryCreationForm(std::string target) \
: Form("Order66", 145, 137), _target(target)
{
}

ShruberryCreationForm::ShruberryCreationForm(ShruberryCreationForm& const rhs) \
: Form(rhs), _target(src.getTarget())
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
	std::string filename = this->getTarget() + "_shruberry"
	std::ofstream o(filename.c_str());

	o << "	  _\/_";
	o << "	   /\\";
	o << "	   /\\";
	o << "	  /  \\";
	o << "	 /~~\\o";
	o << "   /o   \\";
	o << "  /~~*~~~\\";
	o << " o/    o \\";
	o << " /~~~~~~~~\\~`";
	o << "/__*_______\\";
	o << "     ||";
	o << "   \====/";
	o << "    \__/";

	o.close();
}