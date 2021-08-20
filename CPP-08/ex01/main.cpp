/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:30:58 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/20 15:08:11 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span sp = Span(10);

	std::cout << "--- shortestSpan() and longestSpan() ---" << std::endl;
	sp.addNumber(1);
	sp.addNumber(-5);
	sp.addNumber(9);
	
	std::cout << sp << std::endl;

	std::cout << std::endl;
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " <<  sp.longestSpan() << std::endl;


	////////////////////////////////////////////////////////////////////
	std::cout << std::endl << std::endl;
	std::cout << "--- addNumber() by int, int range and iterator range ---" << std::endl;
	sp.addNumber(6);
	std::cout << sp << std::endl;

	std::cout << std::endl;
	sp.addNumber(3, 3);
	std::cout << sp << std::endl;

	std::cout << std::endl;
	std::vector<int> p;
	p.push_back(9);
	p.push_back(-59);
	p.push_back(-78);
	sp.addNumber(p);
	std::cout << sp << std::endl;



	////////////////////////////////////////////////////////////////////
	srand(time(NULL));
	Span huge(10000);
	for (int i = 0; i < 10000; i++)
		huge.addNumber(std::rand() % INT_MAX);
	std::cout << huge << std::endl;

	////////////////////////////////////////////////////////////////////
	std::cout << std::endl << std::endl;
	std::cout << "--- addNumber() exception: range error" << std::endl;
	Span a(4);
	a.addNumber(3);
	a.addNumber(6);

	try
	{
		a.addNumber(9, 3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::vector<int> v;
	v.push_back(8);
	v.push_back(-7);
	v.push_back(5);
	v.push_back(74);
	try
	{
		a.addNumber(v);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	a.addNumber(8);
	a.addNumber(65);
	try
	{
		a.addNumber(78);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	////////////////////////////////////////////////////////////////////
	std::cout << std::endl << std::endl;
	std::cout << "--- span() exception: not enough elements ---" << std::endl;
	Span y(1);
	y.addNumber(1);
	try
	{
		y.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
	y.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}