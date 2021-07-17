/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 10:53:39 by user42            #+#    #+#             */
/*   Updated: 2021/07/17 17:13:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureau.hpp"

int	main(void)
{
/*
	std::cout << "===== Ex00 =====" << std::endl;
	std::cout << "### Constructors ###" << std::endl;
	Bureaucrat a;
	std::cout << a << std::endl;
	
	// b will not be accessible outside off this try()
	try
	{
		Bureaucrat b("Ace", 1);
		std::cout << b << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Constructor GradeTooHighException
	std::cout << "### Constructor GradeTooHighException (0) ###" << std::endl;
	try
	{
		Bureaucrat b("Ace", 0);
		std::cout << b << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	

	// Constructor GradeTooLowException
	std::cout << "### Constructor GradeTooLowException (151) ###" << std::endl;
	try
	{
		Bureaucrat f("Ace", 151);
		std::cout << f << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	// Increment GradeTooHighException
	std::cout << "### Increment GradeTooHighException (1++) ###" << std::endl;
	Bureaucrat c("Beta", 2);
	std::cout << "Before: " << c << std::endl;
	try
	{
		c.incGrade();
		std::cout << "Succes: " << c << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Failure: " << e.what() << std::endl;
	}
	std::cout << "First inc: " << c << std::endl;
	try
	{
		c.incGrade();
		std::cout << "Succes: " << c << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Failure: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Decrement GradeTooLowException
	std::cout << "### Increment GradeTooLowException (150--) ###" << std::endl;
	Bureaucrat g("Omega", 149);
	std::cout << c << std::endl;
	try
	{
		g.decGrade();
		std::cout << "Succes: " << g << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Failure: " << e.what() << std::endl;
	}
	std::cout << "First dec: " << g << std::endl;
	try
	{
		g.incGrade();
		std::cout << "Succes: " << c << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Failure: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	//Assignation
	std::cout << "### Assignation (c = a) ###" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "c before: " << c << std::endl;
	c = a;
	std::cout << "c after: " << c << std::endl;
	std::cout << std::endl;
	
	//Copy constructor
	std::cout << "### Copy constructor (from c) ###" << std::endl;
	std::cout << "c: " << c << std::endl;
	Bureaucrat d(c);
	std::cout << "d: " << d << std::endl;
	std::cout << std::endl;
*/

	std::cout << "===== Ex01 =====" << std::endl;
	
	std::cout << "### Form Grade Exceptions ###" << std::endl;
	try
	{
		Form("Test1", 0, 75);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form("Test1", 75, 151);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "### signForm() and beSigned() Exceptions ###" << std::endl;
	Bureaucrat bb("Bobby", 101);
	Form a;
	Form b("Plop", 100, 50);

	std::cout << bb << std::endl;
	std::cout << b << std::endl;
	std::cout << std::endl;
	
	bb.signForm(b);
	bb.incGrade();
	bb.signForm(b);
	std::cout << std::endl;

	std::cout << a << std::endl;
	a.beSigned(bb);
	std::cout << a << std::endl;
	try
	{
		a.beSigned(bb);
		std::cout << a << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}