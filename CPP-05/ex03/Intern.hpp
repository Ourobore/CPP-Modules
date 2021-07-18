/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 08:20:39 by user42            #+#    #+#             */
/*   Updated: 2021/07/18 08:40:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "bureau.hpp"

class	Intern
{
	private:
		Form*	_makeShruberry(std::string const &target) const;
		Form*	_makeRobotomy(std::string const &target) const;
		Form*	_makePardon(std::string const &target) const;

	public:
		Intern(void);
		Intern(Intern const &rhs);
		Intern& operator=(Intern const &rhs);
		~Intern(void);

		Form*	makeForm(std::string const &formName, std::string const &target) const;
};

#endif