/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:32:40 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/16 15:08:37 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include "myClass.hpp"

template <typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b)
{
	return (a < b) ? a : b;
}

template <typename T>
T max(T a, T b)
{
	return (a > b) ? a : b;
}


#endif