/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:54:25 by user42            #+#    #+#             */
/*   Updated: 2021/08/24 18:06:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> ms;
	ms.push(4);
	ms.push(8);
	ms.push(12);

	//for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); it++)
	//	std::cout << *it << std::endl;
	std::cout << ms << std::endl;
}