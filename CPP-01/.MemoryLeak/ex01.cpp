/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:43:12 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/22 11:49:46 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
}

void noMemoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;

	delete panther;
}

int main(void)
{
	std::cout << "With memory leak" << std::endl;
	memoryLeak(); //Comment function call to remove the leak
	std::cout << std::endl;
	std::cout << "With no memory leak" << std::endl;
	noMemoryLeak();
}