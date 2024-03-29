/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:35:41 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/22 11:35:51 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	ponyOnTheStack(void)
{
	Pony	pony_stack("Jacob", "Shetland", 120, 200);
	
	pony_stack.printPony();
}

void	ponyOnTheHeap(void)
{
	Pony	*pony_heap = new Pony("Paquerette", "Connemara", 160, 320);
	
	pony_heap->printPony();

	delete pony_heap;
}

int	main(void)
{
	Pony	pony_stack_main("Crimson", "Falabella", 60, 35);
	Pony	*pony_heap_main = new Pony("Isabella", "Welsh", 140, 280);

	std::cout << std::endl;
	std::cout << "### Stack (in main) ###" << std::endl;
	pony_stack_main.printPony();
	std::cout << std::endl;
	std::cout << "### Heap (in main) ###" << std::endl;
	pony_heap_main->printPony();
	std::cout << std::endl;
	std::cout << "### Stack (in function) ###" << std::endl;
	ponyOnTheStack();
	std::cout << std::endl;
	std::cout << "### Heap (in function) ###" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	delete pony_heap_main;
	return (0);
}