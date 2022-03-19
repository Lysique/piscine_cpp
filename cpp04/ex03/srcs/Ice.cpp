/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:15:39 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/17 17:31:06 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(Ice const &cpy) : AMateria("ice")
{
	*this = cpy; 
}

Ice::~Ice(void)
{
}

Ice	&Ice::operator=(Ice const &cpy)
{
	(void)cpy;
	return (*this);
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria	*Ice::clone(void)
{
	Ice	*ptr;

	ptr = new Ice;
	return (ptr);
}
