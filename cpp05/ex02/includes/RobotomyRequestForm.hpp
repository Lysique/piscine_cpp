/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 08:39:37 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/21 08:45:13 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <time.h>

class RobotomyRequestForm : public Form {

public:

	RobotomyRequestForm(const std::string name);
	~RobotomyRequestForm(void);

	void	execute(const Bureaucrat &bc) const;
	void	doRobotomyStuff(const Bureaucrat &bc) const;

};

std::ostream	&operator<<(std::ostream &ostr, RobotomyRequestForm const &F);

#endif
