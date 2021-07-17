/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 11:11:27 by user42            #+#    #+#             */
/*   Updated: 2021/07/17 11:32:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureau.hpp"

Bureaucrat::Bureaucrat(void) : _name("G-Man"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const &name, unsigned int const grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) : _name(rhs.getName()), _grade(rhs.getGrade())
{
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		//_name = rhs.getName();
		_grade = rhs.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

unsigned int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void Bureaucrat::incGrade(void)
{
	if (this->getGrade() - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::decGrade(void)
{
	if (this->getGrade() + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

std::ostream& operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">.";
	return (o);
}