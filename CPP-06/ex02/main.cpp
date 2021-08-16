/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:43:01 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/16 14:19:45 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base* generate(void)
{
	char	type[3] = {'A', 'B', 'C'};
	char	rand = type[std::rand() % 3];
	Base*	c = NULL;
	
	if (rand == 'A')
		c = new A;
	else if (rand == 'B')
		c = new B;
	else if (rand == 'C')
		c = new C;
	return c;
}

void	identify(Base* ptr)
{
	//std::cout << "In identify by pointer" << std::endl;

	Base* a = dynamic_cast<A*>(ptr);
	Base* b = dynamic_cast<B*>(ptr);
	Base* c = dynamic_cast<C*>(ptr);

	if (!a && !b)
		std::cout << "C" << std::endl;
	else if (!b && !c)
		std::cout << "A" << std::endl;
	else if (!c && !a)
		std::cout << "B" << std::endl;
}

void	identify(Base& ptr)
{
	//std::cout << "In identify by reference" << std::endl;
	
	try
	{
		Base& verif = dynamic_cast<A&>(ptr);
		(void)verif;
		std::cout << "A" << std::endl;
	}
	catch(std::exception& e)
	{
	}
	try
	{
		Base& verif = dynamic_cast<B&>(ptr);
		(void)verif;
		std::cout << "B" << std::endl;
	}
	catch(std::exception& e)
	{
	}
	try
	{
		Base& verif = dynamic_cast<C&>(ptr);
		(void)verif;
		std::cout << "C" << std::endl;
	}
	catch(std::exception& e)
	{
	}
}

int	main(void)
{
	srand(time(NULL));
	
	std::cout << "Random class pointer" << std::endl;
	identify(generate());
	std::cout << std::endl;

	std::cout << "Random class reference" << std::endl;
	identify(*generate());
	std::cout << std::endl;

	std::cout << "Identify A, B and C pointers" << std::endl;
	Base* a = new A;
	Base* b = new B;
	Base* c = new C;

	identify(a);
	identify(b);
	identify(c);
	std::cout << std::endl;
	
	std::cout << "Identify A, B and C references" << std::endl;
	Base& aa = *a;
	Base& bb = *b;
	Base& cc = *c;

	identify(aa);
	identify(bb);
	identify(cc);

	delete a;
	delete b;
	delete c;
}