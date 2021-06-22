/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:35:41 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/22 11:14:54 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	ponyOnTheHeap(void)
{
	Pony	pony_heap("Jacob", "Shetland", 120, 200);
	
	pony_heap.printPony();
}

void	ponyOnTheStack(void)
{
	Pony	*pony_stack = new Pony("Paquerette", "Connemara", 160, 320);
	
	pony_stack->printPony();

	delete pony_stack;
}

int	main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}