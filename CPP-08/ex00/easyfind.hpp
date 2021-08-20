/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:37:22 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/20 10:26:29 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <list>

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator it;
	
	it = std::find (container.begin(), container.end(), value);
	return (it);
}

#endif