/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:10:57 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/21 11:40:48 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {

public:

	Intern(void);
	Intern(const Intern &cpy);
	~Intern(void);

	Intern &operator=(const Intern &cpy);

	Form	*makeForm(std::string form, std::string name);

	Form	*makeShrubForm(std::string name);
	Form	*makeRobotForm(std::string name);
	Form	*makePresidForm(std::string name);

private:

	static std::string	_request[3];
	Form	*(Intern::*_forms[3])(std::string);

};

#endif
