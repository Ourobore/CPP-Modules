/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:17:44 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/17 15:21:28 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	//int *a = new int[10];
	//for (int i = 0; i < 10 ; i++)
	//	std::cout << a[i] << std::endl;

	//Array<int> q;
	Array<int> z(5);
	
	for (unsigned int i = 0; i < z.getSize(); i++)
		std::cout << z.getValue()[i] << std::endl;
	
	for (unsigned int i = 0; i < z.getSize(); i++)
		z.getValue()[i] = i;
		
	std::cout << std::endl;
	for (unsigned int i = 0; i < z.getSize(); i++)
		std::cout << z.getValue()[i] << std::endl;
	
	Array<int> a;
	std::cout << std::endl;
	for (unsigned int i = 0; i < a.getSize(); i++)
		std::cout << a.getValue()[i] << std::endl;

	a = z;
	std::cout << std::endl;
	for (unsigned int i = 0; i < a.getSize(); i++)
		std::cout << a.getValue()[i] << std::endl;

	Array<int> n(a);
	std::cout << std::endl;
	for (unsigned int i = 0; i < n.getSize(); i++)
		std::cout << n.getValue()[i] << std::endl;

	std::cout << n[-1] << std::endl;
}