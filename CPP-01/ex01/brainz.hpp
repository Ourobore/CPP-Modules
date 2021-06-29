/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainz.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:28:26 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/29 11:49:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINZ_HPP
# define BRAINZ_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "Zombie.hpp"

Zombie*	    zombieHorde(int N, std::string name);
std::string	randomName(void);

#endif
