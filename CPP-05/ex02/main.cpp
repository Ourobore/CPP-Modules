/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 10:53:39 by user42            #+#    #+#             */
/*   Updated: 2021/07/18 09:19:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureau.hpp"

int	main(void)
{
	srand(time(NULL));
	
	std::cout << "### ShruberryCreationForm Tests ###" << std::endl;
	Bureaucrat bob("Bob", 138);
	ShruberryCreationForm a("home");
	
	std::cout << bob << std::endl;

	std::cout << a << std::endl;
	bob.executeForm(a);
	bob.incGrade();
	std::cout << bob << std::endl;
	bob.executeForm(a);
	bob.signForm(a);
	bob.executeForm(a);

	std::cout << std::endl;
	
	std::cout << "### RobotomyRequestForm Tests ###" << std::endl;
	Bureaucrat nat("Nat", 46);
	RobotomyRequestForm b("me");
	
	std::cout << nat << std::endl;

	std::cout << b << std::endl;
	nat.executeForm(b);
	nat.incGrade();
	std::cout << nat << std::endl;
	nat.executeForm(b);
	nat.signForm(b);
	nat.executeForm(b);

	std::cout << std::endl;
	
	std::cout << "### PresidentialPardonForm Tests ###" << std::endl;
	Bureaucrat groot("Groot", 6);
	PresidentialPardonForm c("Thanos");
	
	std::cout << groot << std::endl;

	std::cout << c << std::endl;
	groot.executeForm(c);
	groot.incGrade();
	std::cout << groot << std::endl;
	groot.executeForm(c);
	groot.signForm(c);
	groot.executeForm(c);
}