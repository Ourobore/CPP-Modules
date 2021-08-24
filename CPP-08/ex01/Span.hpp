/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:30:18 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/24 14:34:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <climits>
# include <cstdlib>
# include <ctime>
# include <vector>
# include <algorithm>

class Span
{
	private:
		std::vector<int>	_array;
		unsigned int		_N;

	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const &rhs);
		Span& operator=(Span const &rhs);
		~Span(void);

		void addNumber(int number);
		void addNumber(int number, unsigned int range);
		void addNumber(std::vector<int> range);


		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);

		std::vector<int>& getArray(void);
};

std::ostream& operator<<(std::ostream& o, Span &rhs);

#endif