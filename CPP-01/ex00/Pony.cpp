/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:35:10 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/22 11:04:33 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Pony::Pony(std::string name, std::string breed, int height, int weight) : _name(name), _breed(breed), _height(height), _weight(weight)
{
	std::cout<< name << " has come to life!" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Oh no! " << this->_name << " died!" << std::endl;
}

void	printPony(void) const
{
	std::cout << "Hello! My name is " << this->_name << " and I'm a " << this->_breed;
	std::cout << ". I'm " << this->_height << " cm tall and weigth " << this->_weight << "." << std::endl;
}