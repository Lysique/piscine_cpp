/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 08:56:17 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/21 08:58:07 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {

public:

	PresidentialPardonForm(const std::string name);
	~PresidentialPardonForm(void);

	void	execute(const Bureaucrat &bc) const;
	void	doPresidentialStuff(const Bureaucrat &bc) const;

};

std::ostream	&operator<<(std::ostream &ostr, PresidentialPardonForm const &F);

#endif
