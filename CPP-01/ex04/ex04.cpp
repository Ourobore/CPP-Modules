/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:17:50 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/24 13:24:09 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	s = "HI THIS IS BRAIN";
	std::string	*p = &s;
	std::string	&ref = s;

	std::cout << "String: " << s << std::endl;
	std::cout << "Pointer: " << *p << std::endl;
	std::cout << "Reference: " << ref << std::endl;
}
