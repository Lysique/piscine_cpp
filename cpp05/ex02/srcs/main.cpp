/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 09:31:33 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/21 11:48:19 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	cp("Jean", 150);
	Bureaucrat	bp("Bob", 3);
	Form		*f1;

	f1 = new ShrubberyCreationForm("Garden");
	bp.signForm(*f1);
	cp.signForm(*f1);
	std::cout << std::endl;
	cp.executeForm(*f1);
	bp.executeForm(*f1);
	delete (f1);
	std::cout << std::endl;

	f1 = new RobotomyRequestForm("Robot");
	cp.executeForm(*f1);
	bp.executeForm(*f1);
	std::cout << std::endl;

	delete (f1);
	f1 = new PresidentialPardonForm("Presid");
	cp.executeForm(*f1);
	bp.executeForm(*f1);
	delete (f1);
}
