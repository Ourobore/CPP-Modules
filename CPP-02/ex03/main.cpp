/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:57:09 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/06 21:48:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.hpp"

int	main()
{
	Point const	p(1, 4);
	Point const a;
	Point const	c(45, 3);
	Point const	verif(1, 4);

	std::cout << p << std::endl;
	std::cout << a << std::endl;
	std::cout << c << std::endl;
	std::cout << verif << std::endl;
	
	std::cout << std::endl;
	std::cout << bsp(p, a, c, verif) << std::endl;
}
