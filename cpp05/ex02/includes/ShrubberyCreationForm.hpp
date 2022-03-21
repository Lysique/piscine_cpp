/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:35:19 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/21 08:50:53 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {

public:

	ShrubberyCreationForm(const std::string name);
	~ShrubberyCreationForm(void);

	void	execute(const Bureaucrat &bc) const;
	void	doShrubberyStuff(const Bureaucrat &bc) const;

};

std::ostream	&operator<<(std::ostream &ostr, ShrubberyCreationForm const &F);

#endif
