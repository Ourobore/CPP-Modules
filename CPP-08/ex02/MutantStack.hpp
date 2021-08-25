/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:54:22 by user42            #+#    #+#             */
/*   Updated: 2021/08/25 10:47:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <list>
# include "myClass.hpp"

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {};
		MutantStack(MutantStack const &rhs) : std::stack<T>() { *this = rhs; };
		MutantStack& operator=(MutantStack const &rhs)
		{
			if (this != &rhs)
				this->c = rhs.c;
			return (*this);
		};
		~MutantStack(void) {};

		typedef typename std::deque<T>::iterator iterator;

		iterator begin(void) { return (this->c.begin()); };
		iterator end(void) { return (this->c.end()); };
};

template <typename T>
std::ostream& operator<<(std::ostream& o, MutantStack<T> &rhs)
{
	o << "[ ";
	for (typename MutantStack<T>::iterator it = rhs.begin(); it != rhs.end(); it++)
	{
		o << *it;
		if (it + 1 != rhs.end())
			o << ", ";
	}
	o << " ]";
	return (o);
}

#endif