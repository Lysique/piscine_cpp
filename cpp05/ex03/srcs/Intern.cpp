/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:10:57 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/21 11:40:42 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern(void)
{
	_forms[0] = &Intern::makeShrubForm;
	_forms[1] = &Intern::makeRobotForm;
	_forms[2] = &Intern::makePresidForm;
}

Intern::Intern(Intern const &cpy)
{
	*this = cpy; 
}

Intern::~Intern(void)
{
}

Intern	&Intern::operator=(Intern const &cpy)
{
	(void)cpy;
	return (*this);
}

Form	*Intern::makeShrubForm(std::string name)
{
	return (new ShrubberyCreationForm(name));
}

Form	*Intern::makeRobotForm(std::string name)
{
	return (new RobotomyRequestForm(name));
}

Form	*Intern::makePresidForm(std::string name)
{
	return (new PresidentialPardonForm(name));
}

Form	*Intern::makeForm(std::string form, std::string name)
{
	for (int i = 0; i < 3; i++)	
	{
		if (form == _request[i])
		{
			std::cout << "Intern creates " << form << std::endl;
			return ((this->*_forms[i])(name));
		}
	}
	std::cout << "Invalid parameter '" << form << "'" << std::endl;
	return (0);
}

std::string	Intern::_request[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
