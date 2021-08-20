/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:30:18 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/20 11:53:32 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <climits>
# include <cstdlib>

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
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);

		std::vector<int> getArray(void) const;
};

std::ostream& operator<<(std::ostream& o, Span const &rhs);

#endif