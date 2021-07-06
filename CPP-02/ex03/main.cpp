/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:57:09 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/06 16:16:32 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.hpp"

int	main()
{
	Point const	p(1, 4);
	Point const a;
	Point const	c(45, 3);
	Point const	verif(50.5f, 50.5f);

	std::cout << p << std::endl;
	std::cout << a << std::endl;
	std::cout << c << std::endl;
	std::cout << verif << std::endl;
	
	std::cout << std::endl;
	std::cout << bsp(p, a, c, verif) << std::endl;
}
