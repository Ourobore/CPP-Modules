/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:56:55 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/17 15:22:09 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T* _value;
		unsigned int _size;

	public:
		Array(void) : _value(NULL), _size(0) {}

		Array(unsigned int n) : _size(n)
		{
			_value = new T[n];
			for (unsigned int i = 0; i < n; i++)
				_value[i] = 0;
		}
		
		Array(Array const &rhs)
		{
			_size = rhs.getSize();
			_value = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_value[i] = rhs.getValue()[i];
		}

		Array& operator=(Array const &rhs)
		{
			if (this != &rhs)
			{
				if (_size)
					delete[] _value;
				_size = rhs.getSize();
				_value = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_value[i] = rhs.getValue()[i];
			}
			return (*this);
		}
		
		T& operator[](int index)
		{
			if (index < 0 || index >= static_cast<int>(_size))
				throw std::exception();
			else
				return (_value[index]);
		}

		~Array(void)
		{
			if (_size)
				delete[] _value;
		}

		unsigned int getSize(void) const
		{
			return (_size);
		}

		T* getValue(void) const
		{
			return (_value);
		}

		void setValue(T value)
		{
			_value = value;
		}
};

#endif