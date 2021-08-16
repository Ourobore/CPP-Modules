/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:15:41 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/16 11:27:26 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <cstdint>

typedef struct Data
{
	std::string	s;
	int			i;

}	Data;

#endif