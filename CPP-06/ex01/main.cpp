/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:14:34 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/16 11:29:34 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	Data* before = new Data();
	before->s = "Am I changed?";
	before->i = 42;

	std::cout << "--- Before ---" << std::endl;
	std::cout << "Address: " << before << std::endl;
	std::cout << "s: " << before->s << std::endl;
	std::cout << "i: " << before->i << std::endl;
	std::cout << std::endl;

	uintptr_t raw;
	raw = serialize(before);
	
	std::cout << "Raw value: " << raw << std::endl;
	std::cout << std::endl;

	Data* after = deserialize(raw);
	
	std::cout << "--- After ---" << std::endl;
	std::cout << "Address: " << after << std::endl;
	std::cout << "s: " << after->s << std::endl;
	std::cout << "i: " << after->i << std::endl;

	delete before;
}