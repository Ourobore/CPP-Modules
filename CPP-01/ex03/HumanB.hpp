/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:42:41 by user42            #+#    #+#             */
/*   Updated: 2021/06/29 14:38:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "violence.hpp" 

class   HumanB
{
    private:
        std::string _name;
        Weapon      *_weapon;
        
    public:
        HumanB(std::string name);
        ~HumanB(void);
        
        void        attack(void) const;
        std::string getName(void) const;
        void        setWeapon(Weapon &weapon);
};

#endif