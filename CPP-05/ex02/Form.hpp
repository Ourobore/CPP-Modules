/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 13:10:24 by user42            #+#    #+#             */
/*   Updated: 2021/07/18 09:18:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class	Form
{
	protected:
		std::string	const 	_name;
		unsigned int const	_signGrade;
		unsigned int const	_execGrade;
		bool				_signed;

	public:
		Form(void);
		Form(std::string const &name, unsigned int const signGrade, unsigned int const execGrade);
		Form(Form const &rhs);
		Form& operator=(Form const &rhs);
		~Form(void);

		void	beSigned(Bureaucrat const &rhs);
		void	execute(Bureaucrat const &executor) const;
		virtual void	doAction(void) const = 0;

		std::string const	getName(void) const;
		unsigned int	getSignGrade(void) const;
		unsigned int	getExecGrade(void) const;
		bool	getSignature(void) const;

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is too high");
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is too low");
				}
		};

		class	AlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Already signed");
				}
		};

		class	NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Not signed");
				}
		};
};

std::ostream& operator<<(std::ostream &o, Form const &rhs);

#endif