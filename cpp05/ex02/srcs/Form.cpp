/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:03:46 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/21 08:28:01 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form(const std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	_checkGrade();
	this->_signed = 0;
}

Form::Form(Form const &cpy) : _name(cpy.getName()), _signGrade(cpy.getSignGrade()),
	_execGrade(cpy.getExecGrade())
{
	*this = cpy; 
}

Form::~Form(void)
{
}

Form	&Form::operator=(Form const &cpy)
{
	(void)cpy;
	return (*this);
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

int	Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int	Form::getExecGrade(void) const
{
	return (this->_execGrade);
}


void	Form::beSigned(const Bureaucrat &bc)
{
	if (this->_signGrade < bc.getGrade())
	{
		this->_signed = false;
		throw Form::GradeTooLowException();
	}
	else
		this->_signed = true;
}

void	Form::_checkGrade(void)
{
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->_signGrade > 150 || this->_execGrade > 150)
		throw Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &ostr, Form const &F)
{
	ostr << "Name : " << F.getName() << ", Exec grade : " << F.getExecGrade()
		<< ", Sign grade : " << F.getSignGrade();
	return (ostr);
}
