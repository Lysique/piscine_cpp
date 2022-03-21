/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 09:47:22 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/21 08:29:43 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {

public:

	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &cpy);
	~Bureaucrat(void);

	Bureaucrat &operator=(const Bureaucrat &cpy);

	std::string	getName(void) const;
	int			getGrade(void) const;
	void		incrGrade(void);
	void		decrGrade(void);

	void		signForm(Form &F) const;
	void		executeForm(const Form &F) const;

private:

	void		_checkGrade(void);

	const std::string	_name;
	int					_grade;

public:

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what() const throw() {
			return ("Bureaucrat Exception thrown : Grade too high.");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char	*what() const throw() {
			return ("Bureaucrat exception thrown : Grade too low.");
		}
	};
};

std::ostream	&operator<<(std::ostream &ostr, Bureaucrat const &Brc);

#endif
