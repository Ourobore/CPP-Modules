/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:21:46 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/17 13:43:33 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _value(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n)
{
}

template <typename T>
Array<T>::Array(Array const &rhs) : _value(rhs.getValue())
{
}
