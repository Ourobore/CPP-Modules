/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:47:28 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/24 14:07:40 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex05.hpp"

int main()
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}