/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 10:53:39 by user42            #+#    #+#             */
/*   Updated: 2021/07/17 21:03:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureau.hpp"

int	main(void)
{
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