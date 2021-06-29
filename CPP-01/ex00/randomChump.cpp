/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:02:14 by user42            #+#    #+#             */
/*   Updated: 2021/06/29 11:03:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"

void    randomChump(std::string name)
{
    Zombie  randomZombie(name);

    randomZombie.announce();
}