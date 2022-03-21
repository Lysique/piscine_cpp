/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 08:56:17 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/21 11:48:59 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string name) : Form(name, 145, 137) 
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void	PresidentialPardonForm::doPresidentialStuff(const Bureaucrat &bc) const
{
	std::cout << bc.getName() << " has been forgotten by Zaphod Beeblebrox." << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat &bc) const
{
	if (bc.getGrade() > this->_execGrade)
		throw Form::GradeTooLowException();
	else
		doPresidentialStuff(bc);
}
