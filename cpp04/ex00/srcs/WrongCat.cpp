/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:47:33 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 13:00:26 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const &cpy)
{
	*this = cpy; 
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat default destructor" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &cpy)
{
	(void)cpy;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow I guess" << std::endl;
}
