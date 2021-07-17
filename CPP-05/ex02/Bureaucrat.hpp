/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 10:55:30 by user42            #+#    #+#             */
/*   Updated: 2021/07/17 16:50:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class	Form;

class Bureaucrat
{
	private:
		std::string const	_name;
		unsigned int		_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string const &name, unsigned int const grade);
		Bureaucrat(Bureaucrat const &rhs);
		Bureaucrat& operator=(Bureaucrat const &rhs);
		~Bureaucrat(void);

		std::string		getName(void) const;
		unsigned int	getGrade(void) const;
		void			incGrade(void);
		void			decGrade(void);

		void	signForm(Form &rhs) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Exception: Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Exception: Grade is too low");
				}
		};
};

std::ostream& operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif