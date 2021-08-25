/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:54:25 by user42            #+#    #+#             */
/*   Updated: 2021/08/25 10:25:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	std::cout << "##### Subject tests #####" << std::endl;
	std::cout << "-> MutantStack" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;

	std::cout << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	std::cout << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl;
	std::stack<int> s(mstack);
	while (!s.empty())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}


	std::cout << std::endl << std::endl;
	std::cout << "-> std::list" << std::endl;
	std::list<int> lstack;
	lstack.push_front(5);
	lstack.push_front(17);
	std::cout << lstack.front() << std::endl;

	std::cout << std::endl;
	lstack.pop_front();
	std::cout << lstack.size() << std::endl;

	lstack.push_front(3);
	lstack.push_front(5);
	lstack.push_front(737);
	//[...]
	lstack.push_front(0);
	
	std::cout << std::endl;
	std::list<int>::iterator lit = lstack.begin();
	std::list<int>::iterator lite = lstack.end();
	++it;
	--it;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	/*
	std::cout << std::endl;
	std::stack<int> l(lstack);
	while (!l.empty())
	{
		std::cout << l.top() << std::endl;
		l.pop();
	}
	*/

	std::cout << std::endl << std::endl;
	std::cout << "##### My tests #####" << std::endl;
	MutantStack<int> ms;

	std::cout << "--- push() and size() ---" << std::endl;
	ms.push(4);
	ms.push(8);
	ms.push(12);

	std::cout << ms << std::endl;
	std::cout << "Size: " << ms.size() << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "--- empty() ---" << std::endl;
	if (ms.empty())
		std::cout << "The stack is empty" << std::endl;
	else
		std::cout << "The stack is not empty" << std::endl;

	std::cout << std::endl;
	MutantStack<char> charEmpty;
	if (charEmpty.empty())
		std::cout << "The stack is empty" << std::endl;
	else
		std::cout << "The stack is not empty" << std::endl;

	

	std::cout << std::endl << std::endl;
	std::cout << "--- top() and pop() ---" << std::endl;
	while (!ms.empty())
	{
		std::cout << ms.top() << std::endl;
		ms.pop();
	}
}