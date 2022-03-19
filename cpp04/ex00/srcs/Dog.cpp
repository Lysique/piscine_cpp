/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:29:54 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 12:36:18 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(Dog const &cpy)
{
	*this = cpy; 
}

Dog::~Dog(void)
{
	std::cout << "Dog default destructor" << std::endl;
}

Dog	&Dog::operator=(Dog const &cpy)
{
	(void)cpy;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOF" << std::endl;
}
