/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:57:09 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/05 19:17:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.hpp"

int	main()
{
	Point	p(0, 4);
	Point	a;
	Point	c(4, 0);
	Point	verif(1, 1);

	std::cout << p << std::endl;
	//std::cout << a << std::endl;
	std::cout << p.getCoordX() << std::endl;
	std::cout << p.getCoordY() << std::endl;
	std::cout << a.getCoordX() << std::endl;
	std::cout << a.getCoordY() << std::endl;
	std::cout << std::endl;
	std::cout << bsp(p, a, c, verif) << std::endl;
}
