/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 11:28:29 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/30 14:08:08 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complain.hpp"

int main()
{
	Karen K;

	K.complain("DEBUG");
	std::cout << std::endl;

	K.complain("INFO");
	std::cout << std::endl;
	
	K.complain("WARNING");
	std::cout << std::endl;
	
	K.complain("ERROR");

	K.complain("Just some gibberish");
}