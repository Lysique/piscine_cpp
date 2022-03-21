/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 08:39:37 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/21 11:49:15 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string name) : Form(name, 72, 45) 
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void	RobotomyRequestForm::doRobotomyStuff(const Bureaucrat &bc) const
{
	int	var;

	srand(time(0));
	var = rand() % 100 + 1;
	std::cout << "~Bruits de perceuses~" << std::endl;
	if (var <= 50)
		std::cout << bc.getName() << " got robotized !" << std::endl;
	else
		std::cout << "Robotization failed !" << std::endl;
}

void	RobotomyRequestForm::execute(const Bureaucrat &bc) const
{
	if (bc.getGrade() > this->_execGrade)
		throw Form::GradeTooLowException();
	else
		doRobotomyStuff(bc);
}
