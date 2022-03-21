/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 09:47:22 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/19 13:19:17 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	this->_grade = grade;
	_checkGrade();
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : _name(cpy.getName())
{
	this->_grade = cpy.getGrade();
	*this = cpy; 
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &cpy)
{
	this->_grade = cpy._grade;
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void		Bureaucrat::incrGrade(void)
{
	this->_grade--;
	_checkGrade();
}

void		Bureaucrat::decrGrade(void)
{
	this->_grade++;
	_checkGrade();
}

void	Bureaucrat::_checkGrade(void)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &ostr, Bureaucrat const &Brc)
{
	ostr << Brc.getName() << " is grade " << Brc.getGrade();
	return (ostr);
}
