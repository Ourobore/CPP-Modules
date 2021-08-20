/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:30:46 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/20 11:59:26 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(Span const &rhs) : _array(rhs._array), _N(rhs._N)
{
}

Span& Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		_N = rhs._N;
		_array = rhs._array;
	}
	return (*this);
}

Span::~Span(void)
{
}

void	Span::addNumber(int number)
{
	if (_array.size() >= _N)
		throw std::length_error ("Vector is already full");
	else
		_array.push_back(number);
}

unsigned int Span::shortestSpan(void)
{
	unsigned int shortSpan = UINT_MAX;
	
	std::vector<int>::iterator itMin;
	itMin = min_element(_array.begin(), _array.end());
	
	for (std::vector<int>::iterator it = _array.begin(); it != _array.end(); it++)
	{
		if (shortSpan > static_cast<unsigned int>(std::abs(*it - *itMin)) && it != itMin)
			shortSpan = static_cast<unsigned int>(std::abs(*it - *itMin));
	}
	return (shortSpan);
}

unsigned int Span::longestSpan(void)
{
	unsigned int longSpan = 0;

	std::vector<int>::iterator itMin;
	itMin = min_element(_array.begin(), _array.end());
	
	std::vector<int>::iterator itMax;
	itMax = max_element(_array.begin(), _array.end());

	longSpan =  *itMax - *itMin;
	return (longSpan);
}

std::vector<int> Span::getArray(void) const
{
	return (_array);
}

std::ostream& operator<<(std::ostream& o, Span const &rhs)
{
	o << "(" << rhs.getArray().size() << "): ";
	o << "[ ";
	for (std::vector<int>::iterator it = rhs.getArray().begin(); it != rhs.getArray().end(); it++)
	{
		o << *it;
		if (it + 1 != rhs.getArray().end())
			o << ", ";
	}
	o << " ]";
	return (o);
}