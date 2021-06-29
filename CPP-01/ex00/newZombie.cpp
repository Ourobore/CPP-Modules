/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:56:18 by user42            #+#    #+#             */
/*   Updated: 2021/06/29 10:58:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* newZombie = new Zombie(name);

    return (newZombie);
}