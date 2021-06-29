/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:42:41 by user42            #+#    #+#             */
/*   Updated: 2021/06/29 14:34:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "violence.hpp" 

class   HumanA
{
    private:
        std::string _name;
        Weapon      &_weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        
        void        attack(void) const;
        std::string getName(void) const;
};

#endif