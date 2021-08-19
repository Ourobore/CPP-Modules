/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:15:42 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/19 16:40:32 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::cout << "--- <vector> ---" << std::endl;
	std::vector<int> v;
	for (int i = 1; i <= 5; i++)
        v.push_back(i);

	std::cout << "Vector:" << std::endl;
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
        std::cout << *it << std::endl;

	std::cout << std::endl;
	std::cout << "easyfind: " << std::endl;
	std::vector<int>::iterator itvi;
	itvi = easyfind(v, 38);
	if (itvi == v.end())
		std::cout << "easyfind() iterator == end() iterator: element not found" << std::endl;
	else
		std::cout << *itvi << std::endl;


}