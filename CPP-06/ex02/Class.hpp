/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:45:27 by lchapren          #+#    #+#             */
/*   Updated: 2021/08/18 09:20:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

class Base { public: virtual ~Base(void) {} };
class A: public Base {};
class B: public Base {};
class C: public Base {};

#endif