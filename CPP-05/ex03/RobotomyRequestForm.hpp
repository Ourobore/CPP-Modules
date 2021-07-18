/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:53:08 by user42            #+#    #+#             */
/*   Updated: 2021/07/17 20:56:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "bureau.hpp"

class	RobotomyRequestForm : public Form
{
	private:
		std::string	_target;
		
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &rhs);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &rhs);
		~RobotomyRequestForm(void);

		std::string	getTarget(void) const;
		void doAction(void) const;
};

#endif