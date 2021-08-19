/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:15:42 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/19 16:48:03 by lchapren         ###   ########.fr       */
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
	std::vector<int>::iterator itv;
	itv = easyfind(v, 38);
	if (itv == v.end())
		std::cout << "easyfind() iterator == end() iterator: element not found" << std::endl;
	else
		std::cout << *itv << std::endl;



	std::cout << std::endl << std::endl;
	std::cout << "--- <deque> ---" << std::endl;
	std::deque<int> d;
	d.push_back(5);
	d.push_back(13);
	d.push_front(-2);

	std::cout << "Deque:" << std::endl;
	for (std::deque<int>::iterator it = d.begin(); it != d.end(); it++)
        std::cout << *it << std::endl;

	std::cout << std::endl;
	std::cout << "easyfind: " << std::endl;
	std::deque<int>::iterator itd;
	itd = easyfind(d, -2);
	if (itd == d.end())
		std::cout << "easyfind() iterator == end() iterator: element not found" << std::endl;
	else
		std::cout << *itd << std::endl;

}