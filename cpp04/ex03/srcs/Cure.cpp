/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:36:58 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/17 17:28:50 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const &cpy) : AMateria("cure")
{
	*this = cpy; 
}

Cure::~Cure(void)
{
}

Cure	&Cure::operator=(Cure const &cpy)
{
	(void)cpy;
	return (*this);
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria	*Cure::clone(void)
{
	Cure	*ptr;

	ptr = new Cure;
	return (ptr);
}
