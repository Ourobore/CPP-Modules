/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:07:34 by user42            #+#    #+#             */
/*   Updated: 2021/07/05 18:50:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "number.hpp"

class   Point
{
    private:
        Fixed const _x;
        Fixed const _y;
    
    public:
        Point(void);
        Point(float const x, float const _y);
        Point(Point const &P);
        ~Point(void);

        Point&  operator=(Point const &src);

        Fixed const    getCoordX(void) const;
        Fixed const    getCoordY(void) const;
};

std::ostream&   operator<<(std::ostream &o, Point const &src);

#endif