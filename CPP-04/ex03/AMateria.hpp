/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:24:00 by user42            #+#    #+#             */
/*   Updated: 2021/07/12 18:02:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class	AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria& operator=(AMateria const &rhs);
		virtual ~AMateria(void);

		virtual	AMateria* clone() const = 0;
		virtual	void use(ICharacter& target);

		std::string& const getType() const;
};

#endif