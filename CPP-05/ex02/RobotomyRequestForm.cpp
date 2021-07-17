/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:57:57 by user42            #+#    #+#             */
/*   Updated: 2021/07/17 21:36:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureau.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) \
: Form("Order66", 72, 45), _target("President")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) \
: Form("Order66", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) \
: Form(rhs), _target(rhs.getTarget())
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) \
{
	if (this != &rhs)
		_target = rhs.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (_target);
}

void	RobotomyRequestForm::doAction(void) const
{
	bool success = std::rand() % 2;
	std::cout << "*Drilling noises* ";
	if (success)
		std::cout << "<" << this->getTarget() << "> has been robotomized" << std::endl;
	else
		std::cout << "robotomization of <" << this->getTarget() << "> has failed" << std::endl;
}