/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:35:27 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/22 11:05:50 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include "header.hpp"

class Pony
{
	private:
		std::string	_name;
		std::string	_breed;
		int			_height;
		int			_weight;

	public:
		Pony(std::string _name, std::string _type, int _height, int _weight);
		~Pony(void);
		void	printPony(void) const;
};

#endif