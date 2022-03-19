/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:10:07 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 13:37:49 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(Animal const &cpy)
{
	*this = cpy; 
}

Animal::~Animal(void)
{
	std::cout << "Animal default destructor" << std::endl;
}

Animal	&Animal::operator=(Animal const &cpy)
{
	(void)cpy;
	return (*this);
}

const std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Very basic animal sound" << std::endl;
}
