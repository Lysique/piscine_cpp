/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:35:19 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/21 11:44:23 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : Form(name, 145, 137) 
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void	ShrubberyCreationForm::doShrubberyStuff(const Bureaucrat &bc) const
{
	std::ofstream	ofs;

	ofs.open(bc.getName().append("_shrubbery"));
	ofs << 
		"    oxoxoo    ooxoo\n"
		"  ooxoxo oo  oxoxooo\n"
		" oooo xxoxoo ooo ooox\n"
		"oxo o oxoxo  xoxxoxo\n"
		" oxo xooxoooo o ooo\n"
		"   ooo\\oo\\  /o/o\n"
		"       \\  \\/ /\n"
		"        |   /\n"
		"        |  |\n"
		"        | D|\n"
		"        |  |\n"
		"        |  |\n"
		" ______/____\\____ \n" << std::endl;
	ofs.close();
}

void	ShrubberyCreationForm::execute(const Bureaucrat &bc) const
{
	if (bc.getGrade() > this->_execGrade)
		throw Form::GradeTooLowException();
	else
		doShrubberyStuff(bc);
}
