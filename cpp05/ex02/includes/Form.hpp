/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:03:46 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/21 08:24:48 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:

	Form(std::string _name, int	signGrade, int execGrade);
	Form(const Form &cpy);
	virtual ~Form(void);

	Form &operator=(const Form &cpy);

	void			beSigned(const Bureaucrat &bc);
	virtual void	execute(const Bureaucrat &bc) const = 0;

	std::string	getName(void) const;
	int			getSignGrade(void) const;
	int			getExecGrade(void) const;

protected:
	
	const std::string	_name;
	bool				_signed;
	const int			_signGrade;
	const int			_execGrade;

	void	_checkGrade(void);

public:

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what() const throw() {
			return ("Form exception thrown : Grade too high.");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char	*what() const throw() {
			return ("Form exception thrown : Grade too low.");
		}
	};
};

std::ostream	&operator<<(std::ostream &ostr, Form const &F);

#endif
