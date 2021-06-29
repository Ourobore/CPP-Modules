/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:35:00 by user42            #+#    #+#             */
/*   Updated: 2021/06/29 14:40:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "violence.hpp"

class Weapon
{
    private:
        std::string _type;
        
    public:
        Weapon(std::string type);
        ~Weapon(void);
        
        std::string const & getType(void) const;
        void    setType(std::string type);
};

#endif