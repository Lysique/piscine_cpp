/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:44:20 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 13:37:29 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpy)
{
	*this = cpy; 
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal default destructor" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &cpy)
{
	(void)cpy;
	return (*this);
}

const std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound. Sounded very wrong" << std::endl;
}
