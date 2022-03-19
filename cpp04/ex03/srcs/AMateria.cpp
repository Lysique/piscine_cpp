/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:08:13 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/17 16:43:41 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria(const std::string	&type)
{
	this->_type = type;
}

AMateria::AMateria(AMateria const &cpy)
{
	*this = cpy; 
}

AMateria::~AMateria(void)
{
}

AMateria	&AMateria::operator=(AMateria const &cpy)
{
	(void)cpy;
	return (*this);
}

const	std::string	&AMateria::getType(void) const
{
	return (this->_type);
}
