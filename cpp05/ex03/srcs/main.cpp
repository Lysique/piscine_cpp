/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 09:31:33 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/26 10:00:33 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int	main(void)
{
	Bureaucrat	cp("Jean", 150);
	Bureaucrat	bp("Bob", 3);
	Form		*f1;
	Intern		intern;

	f1 = intern.makeForm("robotomy request", "Robot");
	cp.signForm(*f1);
	bp.signForm(*f1);
	cp.executeForm(*f1);
	bp.executeForm(*f1);
	delete f1;
	std::cout << std::endl;
	f1 = intern.makeForm("shrubbery creation", "Garden");
	cp.signForm(*f1);
	bp.signForm(*f1);
	cp.executeForm(*f1);
	bp.executeForm(*f1);
	delete f1;
	std::cout << std::endl;
	f1 = intern.makeForm("presidential pardon", "Presid");
	cp.signForm(*f1);
	bp.signForm(*f1);
	cp.executeForm(*f1);
	bp.executeForm(*f1);
	delete f1;
	std::cout << std::endl;
	f1 = intern.makeForm("random request", "Garden");
}
