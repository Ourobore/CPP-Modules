/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:17:22 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/17 13:42:39 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T*	_value;

	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &rhs);
		Array& operator=(Array const &rhs);
		~Array(void);

		T* getValue(void);
		void setValue(T value);
};

#endif