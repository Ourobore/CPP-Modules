/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 13:21:07 by user42            #+#    #+#             */
/*   Updated: 2021/07/17 17:02:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureau.hpp"

Form::Form(void) : _name("Unknow"), _signGrade(150), _execGrade(150), _signed(false)
{
}

Form::Form(std::string const &name, unsigned int const signGrade, unsigned int const execGrade) \
: _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &rhs) : \
_name(rhs.getName()), _signGrade(rhs.getSignGrade()), _execGrade(rhs.getExecGrade()), _signed(false)
{
}

Form& Form::operator=(Form const &rhs)
{
	(void)rhs;
	return (*this);
}

Form::~Form(void)
{
}

void Form::beSigned(Bureaucrat const &rhs)
{
	if (_signed == true)
		throw Form::AlreadySignedException();
	else if (_signGrade >= rhs.getGrade())
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::string const Form::getName(void) const
{
	return (_name);
}

unsigned int Form::getSignGrade(void) const
{
	return (_signGrade);
}

unsigned int Form::getExecGrade(void) const
{
	return (_execGrade);
}

bool Form::getSignature(void) const
{
	return (_signed);
}

std::ostream&	operator<<(std::ostream &o, Form const &rhs)
{
	o << "Form: <" << rhs.getName() << ">, Sign grade <" << rhs.getSignGrade() \
	<< "> and Exec grade <" << rhs.getExecGrade() << ">. Signed: " << rhs.getSignature();
	return (o);
}