/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 10:53:39 by user42            #+#    #+#             */
/*   Updated: 2021/07/18 09:21:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureau.hpp"

int	main(void)
{
	srand(time(NULL));
	
	Intern	lowlyIntern;

	std::cout << "### ShruberryCreationForm Tests ###" << std::endl;
	Bureaucrat bob("Bob", 138);
	Form*	a;
	
	a = lowlyIntern.makeForm("shruberry creation", "home");
	
	std::cout << bob << std::endl;

	std::cout << *a << std::endl;
	bob.executeForm(*a);
	bob.incGrade();
	std::cout << bob << std::endl;
	bob.executeForm(*a);
	bob.signForm(*a);
	bob.executeForm(*a);

	std::cout << std::endl;
	
	std::cout << "### RobotomyRequestForm Tests ###" << std::endl;
	Bureaucrat nat("Nat", 46);
	Form*	b;

	b = lowlyIntern.makeForm("robotomy request", "me");
	
	std::cout << nat << std::endl;

	std::cout << *b << std::endl;
	nat.executeForm(*b);
	nat.incGrade();
	std::cout << nat << std::endl;
	nat.executeForm(*b);
	nat.signForm(*b);
	nat.executeForm(*b);

	std::cout << std::endl;
	
	std::cout << "### PresidentialPardonForm Tests ###" << std::endl;
	Bureaucrat groot("Groot", 6);
	Form	*c;

	c = lowlyIntern.makeForm("presidential pardon", "Thanos");
	
	std::cout << groot << std::endl;

	std::cout << *c << std::endl;
	groot.executeForm(*c);
	groot.incGrade();
	std::cout << groot << std::endl;
	groot.executeForm(*c);
	groot.signForm(*c);
	groot.executeForm(*c);

	std::cout << std::endl;

	std::cout << "### makeForm() failed tests ###" << std::endl;;
	lowlyIntern.makeForm("Shruberry Creation", "Dummy");
	lowlyIntern.makeForm("RobotomyRequestForm", "Dummy");
	lowlyIntern.makeForm("presidential pardon ", "Dummy");
	lowlyIntern.makeForm("A form type not even close", "Dummy");

	delete a;
	delete b;
	delete c;
}