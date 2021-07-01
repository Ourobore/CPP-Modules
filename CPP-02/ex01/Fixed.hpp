/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:57:05 by lchapren          #+#    #+#             */
/*   Updated: 2021/07/01 13:43:35 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include "number.hpp"

class Fixed
{
	private:
		int					_value;
		static int const	_nbBits = 8;
	
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &copy);
		
		Fixed&	operator=(Fixed const &src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif