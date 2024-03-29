/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:57:05 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/02 10:48:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include "number.hpp"

class Fixed
{
	private:
		int					_value;
		static int const	_nbBits;
	
	public:
		Fixed(void);
		Fixed(int const integer);
		Fixed(float const floating);
		Fixed(Fixed const &copy);
		~Fixed(void);
		
		Fixed&	operator=(Fixed const &src);
		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream &o, Fixed const &src);

#endif