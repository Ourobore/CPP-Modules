/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:30:46 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/20 14:40:03 by lchapren         ###   ########.fr       */
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
		throw std::range_error ("Can't add number: vector is already full");
	else
		_array.push_back(number);
}

void	Span::addNumber(int number, unsigned int range)
{
	if (_array.size() + range > _N)
		throw std::range_error("Can't add number: range too big (int range)");
	else
	{
		for (unsigned int i = 0; i < range; i++)
			_array.push_back(number);
	}
}

void	Span::addNumber(std::vector<int> range)
{
	if (_array.size() + range.size() > _N)
		throw std::range_error ("Can't add number: range too big (iterator range)");
	else
		_array.insert(_array.end(), range.begin(), range.end());
}

unsigned int Span::shortestSpan(void)
{
	unsigned int shortSpan = UINT_MAX;
	
	if (_array.size() <= 1)
		throw std::invalid_argument ("One or less element: no shortest span");

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

	if (_array.size() <= 1)
		throw std::invalid_argument ("One or less element: no longest span");
		
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